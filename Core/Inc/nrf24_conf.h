/*
 * nrf24_conf.h
 *
 *  Created on: Sep 6, 2020
 *      Author: sanju
 */

#ifndef INC_NRF24_CONF_H_
#define INC_NRF24_CONF_H_

#include "main.h"

#define CS_LOW()     HAL_GPIO_WritePin(NRF_CS_GPIO_Port, NRF_CS_Pin, GPIO_PIN_RESET);
#define CS_HIGH()    HAL_GPIO_WritePin(NRF_CS_GPIO_Port, NRF_CS_Pin, GPIO_PIN_SET);

// raise CE to enable the RF transmission
#define NRF24L01P_RaiseCE() ;//PA_ODR |= 0x04
// drop CE to disable RF Transmission
#define NRF24L01P_DropCE()  ;//PA_ODR &= 0xFB

#endif /* INC_NRF24_CONF_H_ */
