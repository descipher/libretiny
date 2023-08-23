/* This file was auto-generated from wr1.json using boardgen */

#pragma once

// clang-format off

// Pins
// ----
#define PINS_COUNT         11 // Total GPIO count
#define NUM_DIGITAL_PINS   10 // Digital inputs/outputs
#define NUM_ANALOG_INPUTS  2  // ADC inputs
#define NUM_ANALOG_OUTPUTS 8  // PWM & DAC outputs
#define PINS_GPIO_MAX      41 // Last usable GPIO number

// SPI Interfaces
// --------------
#define PIN_SPI0_CS   19u // PA_19
#define PIN_SPI0_MISO 22u // PA_22
#define PIN_SPI0_MOSI 23u // PA_23
#define PIN_SPI0_SCK  18u // PA_18
#define PIN_SPI1_CS   19u // PA_19
#define PIN_SPI1_MISO 22u // PA_22
#define PIN_SPI1_MOSI 23u // PA_23
#define PIN_SPI1_SCK  18u // PA_18

// Wire Interfaces
// ---------------
#define PIN_WIRE0_SCL_0 29u // PA_29
#define PIN_WIRE0_SCL_1 22u // PA_22
#define PIN_WIRE0_SDA_0 30u // PA_30
#define PIN_WIRE0_SDA_1 19u // PA_19
#define PIN_WIRE1_SCL   18u // PA_18
#define PIN_WIRE1_SDA   23u // PA_23

// Serial ports
// ------------
#define PIN_SERIAL0_CTS 19u // PA_19
#define PIN_SERIAL0_RTS 22u // PA_22
#define PIN_SERIAL0_RX  18u // PA_18
#define PIN_SERIAL0_TX  23u // PA_23
#define PIN_SERIAL2_RX  29u // PA_29
#define PIN_SERIAL2_TX  30u // PA_30

// Pin function macros
// -------------------
#define PIN_ADC1  19u // PA_19
#define PIN_ADC2  41u // AD_2
#define PIN_CS0   19u // PA_19
#define PIN_CS1   19u // PA_19
#define PIN_CTS0  19u // PA_19
#define PIN_MISO0 22u // PA_22
#define PIN_MISO1 22u // PA_22
#define PIN_MOSI0 23u // PA_23
#define PIN_MOSI1 23u // PA_23
#define PIN_PA00  0u  // PA_0
#define PIN_PA05  5u  // PA_5
#define PIN_PA14  14u // PA_14
#define PIN_PA15  15u // PA_15
#define PIN_PA18  18u // PA_18
#define PIN_PA19  19u // PA_19
#define PIN_PA22  22u // PA_22
#define PIN_PA23  23u // PA_23
#define PIN_PA29  29u // PA_29
#define PIN_PA30  30u // PA_30
#define PIN_PWM0  14u // PA_14
#define PIN_PWM1  15u // PA_15
#define PIN_PWM2  0u  // PA_0
#define PIN_PWM4  29u // PA_29
#define PIN_PWM5  22u // PA_22
#define PIN_RTS0  22u // PA_22
#define PIN_RX0   18u // PA_18
#define PIN_RX2   29u // PA_29
#define PIN_SCK0  18u // PA_18
#define PIN_SCK1  18u // PA_18
#define PIN_SCL0  22u // PA_22
#define PIN_SCL1  18u // PA_18
#define PIN_SDA0  19u // PA_19
#define PIN_SDA1  23u // PA_23
#define PIN_TX0   23u // PA_23
#define PIN_TX2   30u // PA_30

// Port availability
// -----------------
#define HAS_SERIAL0             1
#define HAS_SERIAL2             1
#define HAS_SPI0                1
#define HAS_SPI1                1
#define HAS_WIRE0               1
#define HAS_WIRE1               1
#define SERIAL_INTERFACES_COUNT 2
#define SPI_INTERFACES_COUNT    2
#define WIRE_INTERFACES_COUNT   2

// Arduino pin names
// -----------------
#define PIN_D0 23u // PA_23
#define PIN_D1 18u // PA_18
#define PIN_D2 14u // PA_14
#define PIN_D3 15u // PA_15
#define PIN_D4 30u // PA_30
#define PIN_D5 0u  // PA_0
#define PIN_D6 5u  // PA_5
#define PIN_D7 29u // PA_29
#define PIN_D8 19u // PA_19
#define PIN_D9 22u // PA_22
#define PIN_A0 19u // PA_19
#define PIN_A1 41u // AD_2

// Static pin names
// ----------------
static const unsigned char A0 = PIN_A0;
static const unsigned char A1 = PIN_A1;
static const unsigned char D0 = PIN_D0;
static const unsigned char D1 = PIN_D1;
static const unsigned char D2 = PIN_D2;
static const unsigned char D3 = PIN_D3;
static const unsigned char D4 = PIN_D4;
static const unsigned char D5 = PIN_D5;
static const unsigned char D6 = PIN_D6;
static const unsigned char D7 = PIN_D7;
static const unsigned char D8 = PIN_D8;
static const unsigned char D9 = PIN_D9;