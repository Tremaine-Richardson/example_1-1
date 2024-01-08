#include "mbed.h"
#include "arm_book_lib.h"
//this is a test comment
int main()
{
    DigitalIn gasDetector(D2);

    DigitalOut alarmLed(LED1);

    gasDetector.mode(PullDown);

    alarmLed = OFF;

    while (true) {
        if ( gasDetector == ON ) {
            alarmLed = ON;
        } else {
            alarmLed = OFF;
        }
    }
}