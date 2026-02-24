/*
 * cv2.h
 *
 *  Created on: 24. 2. 2026
 *      Author: Student
 */

#ifndef INC_CV2_H_
#define INC_CV2_H_
#include <stdint.h>
#include <main.h>
#define LED_GREEN_PIN 0 //Port B pin 0
#define LED_BLUE_PIN 7 //Port B pin 7
#define LED_RED_PIN 14 //Port B pin 14
#define BUTTON_PIN 13 //port C pin 13
void Button_init(void);   // Inicializace tlačítka
uint8_t Button_read(void); // Čtení stavu tlačítka
void LED_init(void);
void LED_Toggle(uint16_t pin); // Přepnutí stavu
void LED_ON(uint16_t pin);
void LED_OFF(uint16_t pin);

#endif /* INC_CV2_H_ */
