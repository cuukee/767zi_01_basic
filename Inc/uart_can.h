/*
 * uart_can.h
 *
 *  Created on: 2022. 2. 15.
 *      Author: junwook
 */

#ifndef INC_UART_CAN_H_
#define INC_UART_CAN_H_



#include "main.h"

#define _UART2_RS232_TX_
#define _CAN_ACTIVATE_
#define _CAN_TX_CONFIG_
#define _CAN_RX_CONFIG_


/******************************************************************************
* UART
******************************************************************************/





/******************************************************************************
* CAN
******************************************************************************/
#ifdef _CAN_ACTIVATE_
CAN_FilterTypeDef canFilter1;
CAN_RxHeaderTypeDef canRxHeader;
CAN_TxHeaderTypeDef canTxHeader;
uint8_t can1Rx0Data[8];
uint8_t can1Tx0Data[8];
uint32_t TxMailBox;
#endif


void Can_Tx_Config(void);
void Can_Rx_Config(void);
void CAN_Dataset_PB_On(void);
void CAN_Dataset_PB_Off(void);
void CAN_Dataset_PB_volt(void);


void CAN_Dataset_PPMT(void);


#endif /* INC_UART_CAN_H_ */
