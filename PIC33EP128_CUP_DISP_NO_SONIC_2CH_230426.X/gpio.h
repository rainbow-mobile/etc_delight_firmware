#ifndef __GPIO_H__
#define __GPIO_H__

#include <xc.h>
#include <p33EP128GP502.h>

#define SONAR_TRIGGER_UP_A    LATAbits.LATA3 = 1;
#define SONAR_TRIGGER_DOWN_A  LATAbits.LATA3 = 0;

#define SONAR_TRIGGER_UP_B    LATBbits.LATB10 = 1;
#define SONAR_TRIGGER_DOWN_B  LATBbits.LATB10 = 0;


#define LIMIT_ROTATE_A        PORTAbits.RA1
#define LIMIT_EMPTY_A         PORTBbits.RB0

#define LIMIT_ROTATE_B        PORTBbits.RB14
#define LIMIT_EMPTY_B         PORTBbits.RB15


#define MOTOR_A_RUN         LATAbits.LATA0 = 1;
#define MOTOR_A_STOP        LATAbits.LATA0 = 0;

#define MOTOR_B_RUN         LATBbits.LATB13 = 1;
#define MOTOR_B_STOP        LATBbits.LATB13 = 0;


extern void InitGPIO();
extern void InitInputCapture();


#endif