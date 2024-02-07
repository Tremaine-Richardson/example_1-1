#include "mbed.h"
#include "arm_book_lib.h"

#define DUTY_MIN 0.02
#define DUTY_MAX 0.114
#define PERIOD   0.02

//I used two buttons, the user button and a 
//breadboard one to make it easier to calibrate

PwmOut servo(PF_9);
DigitalIn button1(BUTTON1);
DigitalIn button2(D3);

void servoControl();

int main()
{
    button2.mode(PullUp);
    servo.period(PERIOD);
    while(true) {
        servoControl();
    }  
}

void servoControl(){
    if(button1) {
        servo.write(DUTY_MIN);
    }
    if(!button2) {
        servo.write(DUTY_MAX);
    }
}