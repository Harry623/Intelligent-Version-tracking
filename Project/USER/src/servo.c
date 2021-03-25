#include "servo.h"

void servo_init(void)
{
	// 两路pwm都设置成50Hz,占空比7.5%
	pwm_init(PWM4_MODULE2_CHA_C30, 50, 3750);
	pwm_init(PWM4_MODULE3_CHA_C31, 50, 3750);
}
