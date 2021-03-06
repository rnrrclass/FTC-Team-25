#pragma config(Sensor, S1,     controller_chain, sensorI2CCustom)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#include "..\library\ht_motor.h"

#define MOTOR_CTRL 0
#define MOTOR_PORT 0
task main()
{
    HT_MotorInit(controller_chain);
    HT_MotorSetPIDControl(MOTOR_CTRL, MOTOR_PORT, true);
    HT_MotorSetSpeed(MOTOR_CTRL, MOTOR_PORT, 10);
    HT_MotorOn(MOTOR_CTRL, MOTOR_PORT);
    /*wait1Msec(2000);
    HT_MotorOff(0, 0);
    wait1Msec(2000);
    HT_MotorOn(0, 0);
    wait1Msec(2000);
    HT_MotorOff(0, 0);*/

    while (true) {
        nxtDisplayCenteredTextLine(3, "%d", HT_MotorEncoderValue(MOTOR_CTRL, MOTOR_PORT));
    }
}
