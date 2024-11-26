#include "gpio.h"


void InitGPIO(){
    TRISBbits.TRISB7 = 1;   // SW A
    TRISBbits.TRISB8 = 1;   // SW B    
    TRISAbits.TRISA4 = 1;   // SW C
    TRISBbits.TRISB9 = 1;   // SW D
    
    TRISAbits.TRISA1 = 1;   // LIMIT1_A
    TRISBbits.TRISB0 = 1;   // LIMIT2_A
    TRISBbits.TRISB14 = 1;  // LIMIT1_B
    TRISBbits.TRISB15 = 1;  // LIMIT2_B
    
    TRISAbits.TRISA3 = 0;   // Sonar Trigger A
    TRISBbits.TRISB4 = 1;   // Sonar Data A
    TRISBbits.TRISB10 = 0;  // Sonar Trigger B
    TRISBbits.TRISB11 = 1;  // Sonar Data B
    
    
    TRISAbits.TRISA0 = 0;   // Motor A
    TRISBbits.TRISB13 = 0;  // Motor B
    
    
    TRISBbits.TRISB1 = 0;   // LED A
    TRISBbits.TRISB12 = 0;   // LED B
}


void InitInputCapture(){
    RPINR7bits.IC1R = 36;   // input capture RP36 (RB4)
    
    IC1CON1bits.ICM = 1;
    IC1CON2bits.IC32 = 0;
    IC1CON1bits.ICI = 0;
    IC1CON1bits.ICTSEL = 0b001; // timer2
    
    IC1CON2bits.ICTRIG = 0; //  sync with timer
    IC1CON2bits.SYNCSEL = 0b01100; // timer 2
    
    IFS0bits.IC1IF = 0;
    IEC0bits.IC1IE = 1;
    IPC0bits.IC1IP = 5;
    
    //-------------------------------------------
    
    RPINR7bits.IC2R = 43;   // input capture RP43 (RB11)
    
    IC2CON1bits.ICM = 1;
    IC2CON2bits.IC32 = 0;
    IC2CON1bits.ICI = 0;
    IC2CON1bits.ICTSEL = 0b001; // timer2
    
    IC2CON2bits.ICTRIG = 0; //  sync with timer
    IC2CON2bits.SYNCSEL = 0b01100; // timer 2
    
    IFS0bits.IC2IF = 0;
    IEC0bits.IC2IE = 1;
    IPC1bits.IC2IP = 5;
}