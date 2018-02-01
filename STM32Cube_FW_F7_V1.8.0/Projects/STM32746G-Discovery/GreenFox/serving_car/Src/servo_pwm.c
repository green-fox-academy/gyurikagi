/*
 * servo_pwm.c
 *
 *  Created on: 2018. jan. 4.
 *      Author: Agnes
 */

//#define	MIN_POS			1000
//#define	MAX_POS			2000

#include "servo_pwm.h"
#include "main.h"
#include "port_define.h"

GPIO_InitTypeDef  Servo;
TIM_HandleTypeDef Servo_Timh;
TIM_OC_InitTypeDef sConfig;

void servo_init()
{
	__HAL_RCC_GPIOH_CLK_ENABLE();

	Servo.Pin = GPIO_PIN_6;
	Servo.Mode = GPIO_MODE_AF_PP;
	Servo.Speed = GPIO_SPEED_FAST;
	Servo.Alternate = GPIO_AF9_TIM12;

	HAL_GPIO_Init(GPIOH, &Servo);
}

void init_timer12()
{
	__HAL_RCC_TIM12_CLK_ENABLE();

	Servo_Timh.Instance = TIM12;
	Servo_Timh.Init.CounterMode = TIM_COUNTERMODE_UP;
	Servo_Timh.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	Servo_Timh.Init.Period = (2000-1);
	Servo_Timh.Init.Prescaler = (1080-1);

	sConfig.Pulse = 150;
	sConfig.OCMode = TIM_OCMODE_PWM1;

	HAL_TIM_PWM_Init(&Servo_Timh);
	HAL_TIM_PWM_ConfigChannel(&Servo_Timh, &sConfig, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&Servo_Timh, TIM_CHANNEL_1);

}

void draw_eight()
{
	for (unsigned int j = 0; j < 2; j++){
		TIM12->CCR1 = 150;
		HAL_Delay(30000);
		for (unsigned int i = 0; i < 50; ++i)
		{
			TIM12->CCR1 +=1;
			HAL_Delay(10);
		}
		HAL_Delay(100);
		for (unsigned int i = 0; i < 50; ++i)
		{
			TIM12->CCR1 -=1;
			HAL_Delay(10);
		}
		HAL_Delay(100);
		TIM12->CCR1 = 150;
		HAL_Delay(30000);
	}
}
