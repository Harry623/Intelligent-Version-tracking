#include "motor.h"

void motor_init(void)
{
	// 电机的四路PWM都是12KHz,0%的占空比,这里AB相不能同时输出
	pwm_init(PWM1_MODULE3_CHA_D0, 12000, 0);// 占空比为5000/PWM_DUTY_MAX PWM_DUTY_MAX在fsl_pwm.h文件中 默认为50000
	pwm_init(PWM1_MODULE3_CHB_D1, 12000, 0);
	
	pwm_init(PWM2_MODULE3_CHA_D2, 12000, 0);
	pwm_init(PWM2_MODULE3_CHB_D3, 12000, 0);

}
