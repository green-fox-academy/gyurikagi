/*
 * letters.h
 *
 *  Created on: 2018. febr. 19.
 *      Author: Felhasználó
 */

#ifndef LETTERS_H_
#define LETTERS_H_

#include "main.h"

void init_colums(GPIO_TypeDef *_gpio, uint16_t _pin);
void define_cols();
void define_row();
void reset_all_rows();
void letter_K();
void letter_R();
void letter_Y();
void letter_P();

#endif /* LETTERS_H_ */
