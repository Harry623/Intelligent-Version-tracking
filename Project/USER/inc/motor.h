#ifndef _MOTOR_H_
#define _MOTOR_H_

#include "headfile.h"

#define MOTOR_RIGHT_FORWARD		PWM1_MODULE3_CHA_D0
#define MOTOR_RIGHT_BACKWARD	PWM1_MODULE3_CHB_D1
#define	MOTOR_LEFT_FORWARD		PWM2_MODULE3_CHA_D2
#define	MOTOR_LEFT_BACKWARD		PWM2_MODULE3_CHB_D3

extern void motor_init(void);

#endif /* _MOTOR_H_ */
