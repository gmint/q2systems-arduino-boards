#pragma once

#include <stdint.h>
#include "soc/soc_caps.h"

/* =========================================================
 *  UART
 * ========================================================= */

static const uint8_t TX0 = 35;
static const uint8_t RX0 = 34;

/* =========================================================
 *  User Outputs
 * ========================================================= */

static const uint8_t LED1 = 15;
static const uint8_t LED2 = 4;
static const uint8_t LED3 = 2;
static const uint8_t LED4 = 5;

/* =========================================================
 *  Ethernet – LAN8720A (RMII, external 50 MHz clock)
 * ========================================================= */

#define ETH_PHY_TYPE        ETH_PHY_LAN8720
#define ETH_PHY_ADDR        1
#define ETH_PHY_POWER       -1

#define ETH_PHY_MDC         23
#define ETH_PHY_MDIO        18

#define ETH_RMII_TXD0       19
#define ETH_RMII_TXD1       22
#define ETH_RMII_TX_EN      21
#define ETH_RMII_RXD0       25
#define ETH_RMII_RXD1       26
#define ETH_RMII_CRS_DV     27

#define ETH_CLK_MODE        ETH_CLOCK_GPIO0_IN

/* =========================================================
 *  TMC2209 Stepper Driver
 * ========================================================= */

#define BOARD_HAS_TMC2209

static const uint8_t STEPPER_STEP_PIN = 14;
static const uint8_t STEPPER_DIR_PIN  = 13;
static const uint8_t STEPPER_EN_PIN   = 32;

static const uint8_t STEPPER_UART_TX  = 14;
static const uint8_t STEPPER_UART_RX  = 9;