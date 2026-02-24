/*
 * cv2.c
 *
 *  Created on: 24. 2. 2026
 *      Author: Student
 */
#include "cv2.h"
/*void LED_init(void) {
    // 1. Povolení hodin pro GPIOB na sběrnici AHB1
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN;


    // Zelená LED (PB0)
    GPIOB->MODER &= ~(3U << (LED_GREEN_PIN * 2)); //Nulování
    GPIOB->MODER |=  (1U << (LED_GREEN_PIN * 2));

    // Modrá LED (PB7)
    GPIOB->MODER &= ~(3U << (LED_BLUE_PIN * 2)); //Nulování
    GPIOB->MODER |=  (1U << (LED_BLUE_PIN * 2));

    // Červená LED (PB14)
    GPIOB->MODER &= ~(3U << (LED_RED_PIN * 2)); //Nulování
    GPIOB->MODER |=  (1U << (LED_RED_PIN * 2));
}

void LED_ON(uint16_t pin) {
    //Nastavení bitu v registru ODR
    GPIOB->ODR |= (1U << pin);
}

void LED_OFF(uint16_t pin) {
   //  Vynulování bitu v registru ODR
	GPIOB->ODR &= ~(1U << pin);
}
void Button_init(void) {
    RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN; // Hodiny pro PORT C
    GPIOC->MODER &= ~(3U << (BUTTON_PIN * 2));
}

void LED_Toggle(uint16_t pin) {
    GPIOB->ODR ^= (1U << pin);
}

uint8_t Button_read(void) {
    if (GPIOC->IDR & (1U << BUTTON_PIN)) {
        return 1;
    }
    return 0;
}
*/




