/*
 * letters.c
 *
 *  Created on: 2018. febr. 19.
 *      Author: Felhasználó
 */

#include "main.h"
#include "letters.h"

typedef struct {
	GPIO_TypeDef* port;
	uint16_t pin;
}t_pin;

//define pins on board
//columns
#define A1		 GPIOF, GPIO_PIN_10
#define A2		 GPIOF, GPIO_PIN_9
#define A3		 GPIOF, GPIO_PIN_8
#define A4		 GPIOF, GPIO_PIN_7
#define A5		 GPIOF, GPIO_PIN_6
// rows
#define D10		 GPIOA, GPIO_PIN_8
#define D11		 GPIOB, GPIO_PIN_15
#define D9		 GPIOA, GPIO_PIN_15
#define D8		 GPIOI, GPIO_PIN_2
#define D7		 GPIOI, GPIO_PIN_3
#define D6		 GPIOH, GPIO_PIN_6
#define D5		 GPIOI, GPIO_PIN_0


#define myPinC1	A1

//define col pins
#define c1		GPIO_PIN_10
#define c2		GPIO_PIN_9
#define c3		GPIO_PIN_8
#define c4		GPIO_PIN_7
#define c5		GPIO_PIN_6

//define row pins
#define r1 		GPIO_PIN_8
#define r2 		GPIO_PIN_15
#define r3 		GPIO_PIN_15
#define r4		GPIO_PIN_2
#define r5		GPIO_PIN_3
#define r6		GPIO_PIN_6
#define r7		GPIO_PIN_0

GPIO_InitTypeDef C1;
GPIO_InitTypeDef C2;
GPIO_InitTypeDef C3;
GPIO_InitTypeDef C4;
GPIO_InitTypeDef C5;
GPIO_InitTypeDef R1;
GPIO_InitTypeDef R2;
GPIO_InitTypeDef R3;
GPIO_InitTypeDef R4;
GPIO_InitTypeDef R5;
GPIO_InitTypeDef R6;
GPIO_InitTypeDef R7;


/*
void init_colums(GPIO_TypeDef *_gpio, uint16_t _pin)
{
	__HAL_RCC_GPIOF_CLK_ENABLE();
	GPIO_InitTypeDef C1;
	C1.Pin = _pin;
	C1.Mode = GPIO_MODE_OUTPUT_PP;
	C1.Pull = GPIO_PULLDOWN;
	C1.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(_gpio, &_pin);
} */

/*
 *
 */
void define_cols() {
	__HAL_RCC_GPIOF_CLK_ENABLE();

	C1.Pin = c1;
	C1.Mode = GPIO_MODE_OUTPUT_PP;
	C1.Pull = GPIO_PULLDOWN;
	C1.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOF, &C1);

	C2.Pin = c2;
	C2.Mode = GPIO_MODE_OUTPUT_PP;
	C2.Pull = GPIO_PULLDOWN;
	C2.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOF, &C2);

	C3.Pin = c3;
	C3.Mode = GPIO_MODE_OUTPUT_PP;
	C3.Pull = GPIO_PULLDOWN;
	C3.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOF, &C3);

	C4.Pin = c4;
	C4.Mode = GPIO_MODE_OUTPUT_PP;
	C4.Pull = GPIO_PULLDOWN;
	C4.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOF, &C4);

	C5.Pin = c5;
	C5.Mode = GPIO_MODE_OUTPUT_PP;
	C5.Pull = GPIO_PULLDOWN;
	C5.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOF, &C5);

}

void define_row(){
	__HAL_RCC_GPIOA_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();
	__HAL_RCC_GPIOI_CLK_ENABLE();
	__HAL_RCC_GPIOH_CLK_ENABLE();

	R1.Pin = GPIO_PIN_8;
	R1.Mode = GPIO_MODE_OUTPUT_PP;
	R1.Pull = GPIO_PULLUP;
	R1.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOA, &R1);

	R2.Pin = r2;
	R2.Mode = GPIO_MODE_OUTPUT_PP;
	R2.Pull = GPIO_PULLUP;
	R2.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOB, &R2);

	R3.Pin = r3;
	R3.Mode = GPIO_MODE_OUTPUT_PP;
	R3.Pull = GPIO_PULLUP;
	R3.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOA, &R3);

	R4.Pin = r4;
	R4.Mode = GPIO_MODE_OUTPUT_PP;
	R4.Pull = GPIO_PULLUP;
	R4.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOI, &R4);

	R5.Pin = r5;
	R5.Mode = GPIO_MODE_OUTPUT_PP;
	R5.Pull = GPIO_PULLUP;
	R5.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOI, &R5);

	R6.Pin = r6;
	R6.Mode = GPIO_MODE_OUTPUT_PP;
	R6.Pull = GPIO_PULLUP;
	R6.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOH, &R6);

	R7.Pin = r7;
	R7.Mode = GPIO_MODE_OUTPUT_PP;
	R7.Pull = GPIO_PULLUP;
	R7.Speed = GPIO_SPEED_FAST;

	HAL_GPIO_Init(GPIOI, &R7);

}

void blink_c1()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
}

void blink_c2()
{
	HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
}

void blink_c3()
{
	HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
}

void blink_c4()
{
	HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);
}

void blink_c5()
{
	HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_RESET);

}

void reset_all_rows()
{
	HAL_GPIO_WritePin(GPIOA, r1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOB, r2, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOI, r4, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_RESET);
}



void r4_on()
{
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
}

void r1_4_on()
{
	HAL_GPIO_WritePin(GPIOB, r2, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
}


void r1_3_on()
{
	HAL_GPIO_WritePin(GPIOI, r4, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
}

void r5_7_on()
{
	HAL_GPIO_WritePin(GPIOA, r1, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, r2, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
}

void r7_on()
{
	HAL_GPIO_WritePin(GPIOA, r1, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, r2, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r4, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
}

void r2_3_6_on()
{
	HAL_GPIO_WritePin(GPIOA, r1, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r4, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
}



void r1_4_5_on()
{
	HAL_GPIO_WritePin(GPIOB, r2, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
}

void r2_3_on()
{
	HAL_GPIO_WritePin(GPIOA, r1, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r4, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
}

void letter_K()
{
	// letter "K"
		// C1 all on
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_Delay(1);
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
		// C2 r4 on, all others off
		HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
		HAL_Delay(1);
		//reset pins
		HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_RESET);
		reset_all_rows();
		// c3 r3, r5 on
		HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, r4, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
		HAL_Delay(1);
		//reset pins
		HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_RESET);
		reset_all_rows();
		//c4 r2, r6 on
		HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, GPIO_PIN_8,GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, r4, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
		HAL_Delay(1);
		//reset pins
		HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_RESET);
		reset_all_rows();
		HAL_Delay(1);
		HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOB, r2, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, r4, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
		HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
		HAL_Delay(1);
		HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_RESET);
		reset_all_rows();
		HAL_Delay(1);
}

void letter_R()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
	//R1 and R4 on
	HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_SET);
	r1_4_on();
	HAL_Delay(1);
	//reset pins
	HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_RESET);
	reset_all_rows();
	//R1 and R4 R5 on
	HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_SET);
	r1_4_5_on();
	HAL_Delay(1);
	//reset pins
	HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_RESET);
	reset_all_rows();
	//R2, R3, R6 on
	HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_SET);
	r2_3_6_on();
	HAL_Delay(1);
	//reset pins
	HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_RESET);
	reset_all_rows();
	HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_SET);
	// r7 on
	r7_on();
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_RESET);
	reset_all_rows();
}

void letter_Y()
{
	HAL_GPIO_WritePin(GPIOF, c1, GPIO_PIN_SET);
	r1_3_on();
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOF, c1, GPIO_PIN_RESET);
	reset_all_rows();
	HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_SET);
	r4_on();
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_RESET);
	reset_all_rows();
	//r5-7 on
	HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_SET);
	r5_7_on();
	//reset pins
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_RESET);
	reset_all_rows();
	HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_SET);
	r4_on();
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_RESET);
	reset_all_rows();
	HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_SET);
	r1_3_on();
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_RESET);
	reset_all_rows();
}

void letter_P()
{
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
	//R1 and R4 on
	HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_SET);
	r1_4_on();
	HAL_Delay(1);
	//reset pins
	HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_RESET);
	reset_all_rows();
	HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_SET);
	r1_4_on();
	HAL_Delay(1);
	//reset pins
	HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_RESET);
	reset_all_rows();
	HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_SET);
	r1_4_on();
	HAL_Delay(1);
	//reset pins
	HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_RESET);
	reset_all_rows();
	HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_SET);
	r2_3_on();
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_RESET);
	reset_all_rows();
}


/*
#define text 1,0,0,0,1, 11110 00100 11110
			 1,0,0,1,0, 10001 00100 10001
			 10100 10001 00100 10001
			 11000 11110 00100 11110
			 10100 10100 00100 10000
			 10010 10010 00100 10000
			 10001 10001 00100 10000
*/


