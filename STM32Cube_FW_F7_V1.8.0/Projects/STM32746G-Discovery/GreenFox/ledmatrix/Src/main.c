/**
 ******************************************************************************
 * @file    Templates/Src/main.c
 * @author  MCD Application Team
 * @version V1.0.3
 * @date    22-April-2016
 * @brief   STM32F7xx HAL API Template project
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <string.h>
#include "letters.h"


typedef struct {
	GPIO_TypeDef* port;
	uint16_t pin;
}t_pin;

//define pins on board
#define A1		 GPIOF, GPIO_PIN_10
#define A2		 GPIOF, GPIO_PIN_9
#define A3		 GPIOF, GPIO_PIN_8
#define A4		 GPIOF, GPIO_PIN_7
#define A5		 GPIOF, GPIO_PIN_6



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





/** @addtogroup STM32F7xx_HAL_Examples
 * @{
 */

/** @addtogroup Templates
 * @{
 */

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef uart_handle;
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

volatile uint32_t timIntPeriod;

/* Private function prototypes -----------------------------------------------*/

#ifdef __GNUC__
/* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
 set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */


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
}*/

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
void letter_K()
{
	// letter "K"
		// C1 all on
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
		HAL_Delay(1);
		HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
		// C2 r4 on, all others off
		HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_SET);
		r4_on();
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
	HAL_GPIO_WritePin(GPIOB, r2, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
	HAL_Delay(1);
	//reset pins
	HAL_GPIO_WritePin(GPIOF, c2, GPIO_PIN_RESET);
	reset_all_rows();
	//R1 and R4 R5 on
	HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
	HAL_Delay(1);
	//reset pins
	HAL_GPIO_WritePin(GPIOF, c3, GPIO_PIN_RESET);
	reset_all_rows();
	//R2, R3, R6 on
	HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, r1, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r4, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r7, GPIO_PIN_SET);
	HAL_Delay(1);
	//reset pins
	HAL_GPIO_WritePin(GPIOF, c4, GPIO_PIN_RESET);
	reset_all_rows();
	HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_SET);
	// r7 on
	HAL_GPIO_WritePin(GPIOA, r1, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOB, r2, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOA, r3, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r4, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOI, r5, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOH, r6, GPIO_PIN_SET);
	HAL_Delay(1);
	HAL_GPIO_WritePin(GPIOF, c5, GPIO_PIN_RESET);
	reset_all_rows();
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

/*
#define text 1,0,0,0,1, 11110 00100 11110
			 1,0,0,1,0, 10001 00100 10001
			 10100 10001 00100 10001
			 11000 11110 00100 11110
			 10100 10100 00100 10000
			 10010 10010 00100 10000
			 10001 10001 00100 10000
*/







static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);

/* Private functions ---------------------------------------------------------*/


/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
int main(void) {
	/* This project template calls firstly two functions in order to configure MPU feature
	 and to enable the CPU Cache, respectively MPU_Config() and CPU_CACHE_Enable().
	 These functions are provided as template implementation that User may integrate
	 in his application, to enhance the performance in case of use of AXI interface
	 with several masters. */

	/* Configure the MPU attributes as Write Through */
	MPU_Config();

	/* Enable the CPU Cache */
	CPU_CACHE_Enable();

	/* STM32F7xx HAL library initialization:
	 - Configure the Flash ART accelerator on ITCM interface
	 - Configure the Systick to generate an interrupt each 1 msec
	 - Set NVIC Group Priority to 4
	 - Low Level Initialization
	 */
	HAL_Init();

	define_cols();
	define_row();
	//init_colums(c1);


	/* Configure the System clock to have a frequency of 216 MHz */
	SystemClock_Config();

	BSP_PB_Init(BUTTON_WAKEUP, BUTTON_MODE_EXTI);

	/* Add your application code here
	 */
	BSP_LED_Init(LED_GREEN);

	uart_handle.Init.BaudRate = 115200;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
	uart_handle.Init.StopBits = UART_STOPBITS_1;
	uart_handle.Init.Parity = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode = UART_MODE_TX_RX;

	BSP_COM_Init(COM1, &uart_handle);


	printf("\n-----------------WELCOME-----------------\r\n");
	printf("************ledmatrix project**********\r\n\n");


	while (1) {
		for (int i = 0; i < 255; i++) {
			letter_K();
		}
		for (int i = 0; i < 255; i++) {
			letter_R();
		}
		for (int i = 0; i < 255; i++) {
			letter_Y();
		}













	}
}

/**
 * @brief  Retargets the C library printf function to the USART.
 * @param  None
 * @retval None
 */
PUTCHAR_PROTOTYPE {
	/* Place your implementation of fputc here */
	/* e.g. write a character to the EVAL_COM1 and Loop until the end of transmission */
	HAL_UART_Transmit(&uart_handle, (uint8_t *) &ch, 1, 0xFFFF);

	return ch;
}

/**
 * @brief  System Clock Configuration
 *         The system Clock is configured as follow :
 *            System Clock source            = PLL (HSE)
 *            SYSCLK(Hz)                     = 216000000
 *            HCLK(Hz)                       = 216000000
 *            AHB Prescaler                  = 1
 *            APB1 Prescaler                 = 4
 *            APB2 Prescaler                 = 2
 *            HSE Frequency(Hz)              = 25000000
 *            PLL_M                          = 25
 *            PLL_N                          = 432
 *            PLL_P                          = 2
 *            PLL_Q                          = 9
 *            VDD(V)                         = 3.3
 *            Main regulator output voltage  = Scale1 mode
 *            Flash Latency(WS)              = 7
 * @param  None
 * @retval None
 */
static void SystemClock_Config(void) {
	RCC_ClkInitTypeDef RCC_ClkInitStruct;
	RCC_OscInitTypeDef RCC_OscInitStruct;

	/* Enable HSE Oscillator and activate PLL with HSE as source */
	RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
	RCC_OscInitStruct.HSEState = RCC_HSE_ON;
	RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
	RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
	RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
	RCC_OscInitStruct.PLL.PLLM = 25;
	RCC_OscInitStruct.PLL.PLLN = 432;
	RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
	RCC_OscInitStruct.PLL.PLLQ = 9;
	if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
		Error_Handler();
	}

	/* activate the OverDrive to reach the 216 Mhz Frequency */
	if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
		Error_Handler();
	}

	/* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
	 clocks dividers */
	RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK
			| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
	RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
	RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
	RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
	RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
	if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7) != HAL_OK) {
		Error_Handler();
	}
}

/**
 * @brief  This function is executed in case of error occurrence.
 * @param  None
 * @retval None
 */
static void Error_Handler(void) {
	/* User may add here some code to deal with this error */
	while (1) {
	}
}

/**
 * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
 * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
 *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
 * @param  None
 * @retval None
 */
static void MPU_Config(void) {
	MPU_Region_InitTypeDef MPU_InitStruct;

	/* Disable the MPU */
	HAL_MPU_Disable();

	/* Configure the MPU attributes as WT for SRAM */
	MPU_InitStruct.Enable = MPU_REGION_ENABLE;
	MPU_InitStruct.BaseAddress = 0x20010000;
	MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
	MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
	MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
	MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
	MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
	MPU_InitStruct.Number = MPU_REGION_NUMBER0;
	MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
	MPU_InitStruct.SubRegionDisable = 0x00;
	MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

	HAL_MPU_ConfigRegion(&MPU_InitStruct);

	/* Enable the MPU */
	HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
}

/**
 * @brief  CPU L1-Cache enable.
 * @param  None
 * @retval None
 */
static void CPU_CACHE_Enable(void) {
	/* Enable I-Cache */
	SCB_EnableICache();

	/* Enable D-Cache */
	SCB_EnableDCache();
}

#ifdef  USE_FULL_ASSERT

/**
 * @brief  Reports the name of the source file and the source line number
 *         where the assert_param error has occurred.
 * @param  file: pointer to the source file name
 * @param  line: assert_param error line source number
 * @retval None
 */
void assert_failed(uint8_t* file, uint32_t line)
{
	/* User can add his own implementation to report the file name and line number,
	 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

	/* Infinite loop */
	while (1)
	{
	}
}
#endif

/**
 * @}
 */

/**
 * @}
 */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
