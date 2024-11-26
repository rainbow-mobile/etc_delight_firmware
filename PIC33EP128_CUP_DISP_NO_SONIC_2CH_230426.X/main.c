/*
 * File:   main.c
 * Author: rainbow
 *
 */


#include "xc.h"
#include "cpu_config.h"
#include "can.h"
#include "timer.h"
#include "gpio.h"
#include "adc.h"

#ifdef _HAS_DMA_
__eds__ ECAN1MSGBUF Ecan1msgBuf __attribute__( (eds, space(dma), aligned(ECAN1_MSG_BUF_LENGTH * 16)) );
#else
__eds__ ECAN1MSGBUF Ecan1msgBuf  __attribute__( (eds, space(xmemory), aligned(ECAN1_MSG_BUF_LENGTH * 16)) );
#endif


void ConfigOSC(void) {
    OSCCONbits.NOSC = 0b011; // EC with PLL

//    // M/(N1*N2)*F = 40/(4*2)*24M = 120M
//    PLLFBDbits.PLLDIV = 38; // M = PLLFBD + 2 = 40
//    CLKDIVbits.PLLPOST = 0; // N2 = 2*(PLLPOST+1) = 2
//    CLKDIVbits.PLLPRE = 2;  // N1 = PLLPRE+2 = 4
    
    // M/(N1*N2)*F = 20/(3*2)*24M = 80M
    PLLFBDbits.PLLDIV = 18; // M = PLLFBD + 2 = 20
    CLKDIVbits.PLLPOST = 0; // N2 = 2*(PLLPOST+1) = 2
    CLKDIVbits.PLLPRE = 1;  // N1 = PLLPRE+2 = 3

    // disable Watch Dog Timer
    RCONbits.SWDTEN = 0;

//    // Clock Switching
//    // oscillator select
//    __builtin_write_OSCCONH(0x03);
//    // clock Switch
//    __builtin_write_OSCCONL(OSCCON | 0x01);  //turn on OSWEN
//    
//    // wait until OSWEN to low
//    while (OSCCONbits.OSWEN); 
//    
//    // wait for Clock switch to occur
//    while (OSCCONbits.COSC!= 0b011);
    
    // wait for PLL to lock
    while (OSCCONbits.LOCK!= 1);
}



unsigned int rising_time_A, falling_time_A;
int falling_edge_rcvd_A = 0;
int rising_edge_A = 1;

unsigned short ultra_sonic_avg_A;
unsigned int ultra_sonic_state_A = 1;
unsigned int ultra_sonic_fail_count_A = 0;

static int InputCaptureCount_A = 0;
static int glitch_count_A = 0;
unsigned char ULTRA_SONIC_ERROR_A = 0;



unsigned int rising_time_B, falling_time_B;
int falling_edge_rcvd_B = 0;
int rising_edge_B = 1;

unsigned short ultra_sonic_avg_B;
unsigned int ultra_sonic_state_B = 1;
unsigned int ultra_sonic_fail_count_B = 0;

static int InputCaptureCount_B = 0;
static int glitch_count_B = 0;
unsigned char ULTRA_SONIC_ERROR_B = 0;



// -------------------

int CUP_DETECT_A = 0;
int CUP_DISPENSE_FLAG_A = 0;
int CUP_DISPENSE_MIN_TIME_A = 50;
int CUP_CHECK_COUNT_A = 10;

int CUP_DETECT_B = 0;
int CUP_DISPENSE_FLAG_B = 0;
int CUP_DISPENSE_MIN_TIME_B = 50;
int CUP_CHECK_COUNT_B = 10;


int CUP_DISPENSE_LAST_ERROR_A = 0;
int CUP_DISPENSE_LAST_ERROR_B = 0;
enum{
    LAST_ERROR_SUCCESS = 0,
    LAST_ERROR_BUSY,
    LAST_ERROR_CUP_EXIST,
    LAST_ERROR_DISPENSE_FAIL,
    LAST_ERROR_TIMEOUT
};

static unsigned int CUP_OUT_COUNT_A = 0;
static unsigned int CUP_OUT_COUNT_B = 0;

static void SendStatus_A();
static void SendStatus_B();

static int SW_A_STATE = 0;
static int SW_B_STATE = 0;
static int SW_A_COUNT = 0;
static int SW_B_COUNT = 0;

int main(void) {
    ConfigOSC();
    // apply initial delay for stable operation ---
    volatile long initial_delay;
    for(initial_delay=0; initial_delay<600000; initial_delay++)
        ;
    volatile long initial_delay2 = 600000;
    while(initial_delay2--)
        ;
    // --------------------------------------------
    ConfigOSC();
    
    ANSELA = ANSELB = 0;

    TRISBbits.TRISB7 = 1;   // SW A
    TRISBbits.TRISB8 = 1;   // SW B
    
    TRISAbits.TRISA4 = 1;   // SW C
    TRISBbits.TRISB9 = 1;   // SW D
    
    
    BNO = 0;
        
    if(PORTBbits.RB7 == 0 && PORTBbits.RB8 == 0){
        BNO = 0;
    }else if(PORTBbits.RB7 == 1 && PORTBbits.RB8 == 0){
        BNO = 1;
    }else if(PORTBbits.RB7 == 0 && PORTBbits.RB8 == 1){
        BNO = 2;
    }else if(PORTBbits.RB7 == 1 && PORTBbits.RB8 == 1){
        BNO = 3;
    }else{
        BNO = 4;
    }
    

    InitCAN();
    InitDMA();
    InitTimer();
    InitTimer2();
    InitGPIO();
//    InitInputCapture();
//    InitADC();
    
    
    int k;
    while(1){
//        AD1CON1bits.SAMP = 1;       // Start sampling
//        for(k=0; k<3000; k++)
//            ;
//        AD1CON1bits.SAMP = 0;       // Start the conversion
//        while(!AD1CON1bits.DONE)    // Wait for the conversion to complete
//            ; 
//        int temp = (ADC1BUF0-512)*CURRENT_CONSTANT;   // Read the ADC conversion result
//        if(temp<0)
//            temp = 0;
//        motor_current = temp;
        
        
   
//        
//        
//           
//        
        k++;
        if(k%1000 == 0){
            LATBbits.LATB1 ^= 1;
        }
    }
    
    return 0;
}


void __attribute__((interrupt, no_auto_psv)) _T1Interrupt(void) {
    static unsigned long t1_cnt = 0;
    t1_cnt++;
    
      
    // manual A
    if(!PORTAbits.RA4 == 1){
        if(SW_A_STATE == 1){
            SW_A_COUNT++;
            if(SW_A_COUNT >= 1000){
                SW_A_STATE = 2;
                
                CUP_DISPENSE_MIN_TIME_A = 1000; //200;
                CUP_DISPENSE_FLAG_A = 1;
            }
        }
        if(SW_A_STATE == 0){
            SW_A_STATE = 1;
        }
    }else{
        SW_A_STATE = 0;
        SW_A_COUNT = 0;
    }
    // manual B
    if(!PORTBbits.RB9 == 1){
        if(SW_B_STATE == 1){
            SW_B_COUNT++;
            if(SW_B_COUNT >= 1000){
                SW_B_STATE = 2;
                
                CUP_DISPENSE_MIN_TIME_B = 1000; //200;
                CUP_DISPENSE_FLAG_B = 1;
            }
        }
        if(SW_B_STATE == 0){
            SW_B_STATE = 1;
        }
    }else{
        SW_B_STATE = 0;
        SW_B_COUNT = 0;
    }
    
    
    
    
//    if(ultra_sonic_avg_A >=2 && ultra_sonic_avg_A <= 6){
    if(PORTBbits.RB4== 0){
        CUP_DETECT_A = 1;
        ultra_sonic_avg_A = 3;
    }else{
        CUP_DETECT_A = 0;
        ultra_sonic_avg_A = 10;
    }
    
//    if(ultra_sonic_avg_B >=2 && ultra_sonic_avg_B <= 6){
    if(PORTBbits.RB11== 0){
        CUP_DETECT_B = 1;
        ultra_sonic_avg_B = 3;
    }else{
        CUP_DETECT_B = 0;
        ultra_sonic_avg_B = 10;
    }
    
    //1000hz 1ms
    
    if(CUP_DISPENSE_FLAG_A == 1){
        CUP_CHECK_COUNT_A--;
        if(CUP_CHECK_COUNT_A < 0){
            CUP_DISPENSE_FLAG_A = 2;
        }
//        else if(ultra_sonic_avg_A >=2 && ultra_sonic_avg_A <= 6){
        else if(PORTBbits.RB4 == 0){
            CUP_DISPENSE_LAST_ERROR_A = LAST_ERROR_CUP_EXIST;
            CUP_OUT_COUNT_A = (CUP_OUT_COUNT_A+1)%256;
            CUP_DISPENSE_FLAG_A = 0;
        }
    }else if(CUP_DISPENSE_FLAG_A == 2){
        MOTOR_A_RUN
        
        CUP_DISPENSE_MIN_TIME_A--;
        if(CUP_DISPENSE_MIN_TIME_A < 0){
            if(LIMIT_ROTATE_A == 0){
                MOTOR_A_STOP
                CUP_CHECK_COUNT_A = 100;
                CUP_DISPENSE_FLAG_A = 3;
            }else if(CUP_DISPENSE_MIN_TIME_A < -5000){
                MOTOR_A_STOP
                CUP_DISPENSE_LAST_ERROR_A = LAST_ERROR_TIMEOUT;
                CUP_OUT_COUNT_A = (CUP_OUT_COUNT_A+1)%256;
                CUP_DISPENSE_FLAG_A = 0;
            }
        }
    }else if(CUP_DISPENSE_FLAG_A == 3){
        CUP_CHECK_COUNT_A--;
        if(CUP_CHECK_COUNT_A < 0){
            CUP_DISPENSE_LAST_ERROR_A = LAST_ERROR_SUCCESS;
            CUP_OUT_COUNT_A = (CUP_OUT_COUNT_A+1)%256;
            CUP_DISPENSE_FLAG_A = 0;
//        }else if(ultra_sonic_avg_A > 8){
        }else if(PORTBbits.RB4 == 1){
            CUP_DISPENSE_LAST_ERROR_A = LAST_ERROR_DISPENSE_FAIL;
            CUP_OUT_COUNT_A = (CUP_OUT_COUNT_A+1)%256;
            CUP_DISPENSE_FLAG_A = 0;
        }
    }
    
    
    
    if(CUP_DISPENSE_FLAG_B == 1){
        CUP_CHECK_COUNT_B--;
        if(CUP_CHECK_COUNT_B < 0){
            CUP_DISPENSE_FLAG_B = 2;
        }
//        else if(ultra_sonic_avg_B >=2 && ultra_sonic_avg_B <= 6){
        else if(PORTBbits.RB11 == 0){
            CUP_DISPENSE_LAST_ERROR_B = LAST_ERROR_CUP_EXIST;
            CUP_OUT_COUNT_B = (CUP_OUT_COUNT_B+1)%256;
            CUP_DISPENSE_FLAG_B = 0;
        }
    }else if(CUP_DISPENSE_FLAG_B == 2){
        MOTOR_B_RUN
        
        CUP_DISPENSE_MIN_TIME_B--;
        if(CUP_DISPENSE_MIN_TIME_B < 0){
            if(LIMIT_ROTATE_B == 0){
                MOTOR_B_STOP
                CUP_CHECK_COUNT_B = 100;
                CUP_DISPENSE_FLAG_B = 3;
            }else if(CUP_DISPENSE_MIN_TIME_B < -5000){
                MOTOR_B_STOP
                CUP_DISPENSE_LAST_ERROR_B = LAST_ERROR_TIMEOUT;
                CUP_OUT_COUNT_B = (CUP_OUT_COUNT_B+1)%256;
                CUP_DISPENSE_FLAG_B = 0;
            }
        }
    }else if(CUP_DISPENSE_FLAG_B == 3){
        CUP_CHECK_COUNT_B--;
        if(CUP_CHECK_COUNT_B < 0){
            CUP_DISPENSE_LAST_ERROR_B = LAST_ERROR_SUCCESS;
            CUP_OUT_COUNT_B = (CUP_OUT_COUNT_B+1)%256;
            CUP_DISPENSE_FLAG_B = 0;
//        }else if(ultra_sonic_avg_B > 8){
        }else if(PORTBbits.RB11 == 1){
            CUP_DISPENSE_LAST_ERROR_B = LAST_ERROR_DISPENSE_FAIL;
            CUP_OUT_COUNT_B = (CUP_OUT_COUNT_B+1)%256;
            CUP_DISPENSE_FLAG_B = 0;
        }
    }
    
    
    
            
    if(t1_cnt%200 == 0){
        LATBbits.LATB12 ^= 1;   
        SendStatus_A();
        SendStatus_B();
    }
    
    IFS0bits.T1IF = 0;
}


MESSAGE	msg;
void __attribute__((interrupt,no_auto_psv))_C1Interrupt(void) 	//ECAN interrupt 
{		
	msg.buffer_number = (unsigned char)C1FIFObits.FNRB;
	rxECAN(&msg);
	
    if(msg.id == 0x120+BNO*2){
        if(msg.data[0] == 0){
            // cup dispense
            if(CUP_DISPENSE_FLAG_A == 0){
                CUP_CHECK_COUNT_A = 100;
                //yujin
                CUP_DISPENSE_MIN_TIME_A = 1000; //200;
                CUP_DISPENSE_FLAG_A = 1;
            }else{
                CUP_DISPENSE_LAST_ERROR_A = LAST_ERROR_BUSY;
                CUP_OUT_COUNT_A = (CUP_OUT_COUNT_A+1)%256;
            }
        }
    }
    
    if(msg.id == 0x120+BNO*2+1){
        if(msg.data[0] == 0){
            // cup dispense
            if(CUP_DISPENSE_FLAG_B == 0){
                CUP_CHECK_COUNT_B = 100;
                //yujin
                CUP_DISPENSE_MIN_TIME_B = 1000; //200;
                CUP_DISPENSE_FLAG_B = 1;
            }else{
                CUP_DISPENSE_LAST_ERROR_B = LAST_ERROR_BUSY;
                CUP_OUT_COUNT_B = (CUP_OUT_COUNT_B+1)%256;
            }
        }
    }
    	
	if((C1RXFUL1&0xFF00)==0 && (C1RXFUL2&0xFFFF)==0){
		C1INTFbits.RBIF = 0;
		IFS2bits.C1IF=0;
	}
}

//
//void __attribute__((interrupt,no_auto_psv))_IC1Interrupt(void){
//    unsigned int t1;
//    t1 = IC1BUF;
//    
//    InputCaptureCount_A++;
//    if (rising_edge_A == 1) {
//        rising_edge_A = 0;
//        rising_time_A = t1;
//    } else {
//        rising_edge_A = 1;
//        falling_edge_rcvd_A = 1;
//        falling_time_A = t1;
//        InputCaptureCount_A = 0;
//    }
//    //Clear IF
//    IFS0bits.IC1IF = 0;
//}
//void __attribute__((interrupt,no_auto_psv))_IC2Interrupt(void){
//    unsigned int t1;
//    t1 = IC2BUF;
//    
//    InputCaptureCount_B++;
//    if (rising_edge_B == 1) {
//        rising_edge_B = 0;
//        rising_time_B = t1;
//    } else {
//        rising_edge_B = 1;
//        falling_edge_rcvd_B = 1;
//        falling_time_B = t1;
//        InputCaptureCount_B = 0;
//    }
//    //Clear IF
//    IFS0bits.IC2IF = 0;
//}


void SendStatus_A(){
    uint8_t send_data[8];
    send_data[0] = ultra_sonic_avg_A;
    send_data[1] = (LIMIT_ROTATE_A<<3) | (LIMIT_EMPTY_A<<2) | (ULTRA_SONIC_ERROR_A<<1) | CUP_DETECT_A;
    send_data[2] = CUP_OUT_COUNT_A;
    send_data[3] = CUP_DISPENSE_LAST_ERROR_A;
    send_data[4] = CUP_DISPENSE_FLAG_A;
    CAN_WRITE(0x130+BNO*2, 5, send_data);
}

void SendStatus_B(){
    uint8_t send_data[8];
    send_data[0] = ultra_sonic_avg_B;
    send_data[1] = (LIMIT_ROTATE_B<<3) | (LIMIT_EMPTY_B<<2) | (ULTRA_SONIC_ERROR_B<<1) | CUP_DETECT_B;
    send_data[2] = CUP_OUT_COUNT_B;
    send_data[3] = CUP_DISPENSE_LAST_ERROR_B;
    send_data[4] = CUP_DISPENSE_FLAG_B;
    CAN_WRITE(0x130+BNO*2+1, 5, send_data);
}
