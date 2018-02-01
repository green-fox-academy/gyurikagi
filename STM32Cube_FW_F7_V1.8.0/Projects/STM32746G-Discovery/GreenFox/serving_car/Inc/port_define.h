/*
 * port_define.h
 *
 *  Created on: 2018. jan. 4.
 *      Author: user
 */

#ifndef PORT_DEFINE_H_
#define PORT_DEFINE_H_

// CN4
#define D3_PIN			GPIO_PIN_4
#define D3_PORT			GPIOB
#define	D3				D3_PORT, D3_PIN		// AF1: TIM3_CH1
#define D4_PIN			GPIO_PIN_7
#define D4_PORT			GPIOG
#define	D4				D4_PORT, D4_PIN
#define D5_PIN			GPIO_PIN_0
#define D5_PORT			GPIOI
#define	D5				D5_PORT, D5_PIN
#define D6_PIN			GPIO_PIN_6
#define D6_PORT			GPIOH
#define	D6				D6_PORT, D6_PIN		// AF9: TIM12_CH1
#define D7_PIN			GPIO_PIN_3
#define D7_PORT			GPIOI
#define	D7				D7_PORT, D7_PIN

// CN7
#define D9_PIN			GPIO_PIN_15
#define D9_PORT			GPIOA
#define	D9				D9_PORT, D9_PIN
#define D10_PIN			GPIO_PIN_8
#define D10_PORT		GPIOA
#define	D10				D10_PORT, D10_PIN	// AF1: TIM1_CH1
#define D14_PIN			GPIO_PIN_9			// AF1: TIM2_CH1
#define D14_PORT		GPIOB
#define D14				D14_PORT, D14_PIN
#define D15_PIN			GPIO_PIN_8
#define D15_PORT		GPIOB
#define D15				D15_PORT, D15_PIN

/* Ultraconic Ranging Module */
#define URM_TRIGGER		D10
#define URM_ECHO		D9

/* I2C - RGB sensors */
#define I2C_SCL			D15
#define I2C_SDA			D14

/* Motor control */
#define MOTOR_PWM		D3
#define MOTOR_DIR		D4

/* Steering servo control */
#define SERVO_PWM		D6


#endif /* PORT_DEFINE_H_ */
