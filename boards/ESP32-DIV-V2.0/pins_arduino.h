#ifndef Pins_Arduino_h
#define Pins_Arduino_h
#include "soc/soc_caps.h"
#include <stdint.h>
#define USB_VID 0x303a
#define USB_PID 0x1001
static const uint8_t TX = 43;
static const uint8_t RX = 44;
static const uint8_t TXD2 = 17;
static const uint8_t RXD2 = 16;
static const uint8_t SDA = 8;
static const uint8_t SCL = 9;
static const uint8_t SS = 10;
static const uint8_t MOSI = 11;
static const uint8_t MISO = 13;
static const uint8_t SCK = 12;
#define NRF24_CS_PIN 4
#define NRF24_CE_PIN 15
#define CC1101_CS_PIN 5
#define CC1101_GDO0_PIN 6
#define CC1101_GDO2_PIN 3
#define SD_CS_PIN 10
#define SD_CD_PIN 38
#define IR_RX_PIN 21
#define IR_TX_PIN 14
#define BUZZER_PIN 2
#define BATTERY_PIN 2
#define NEOPIXEL_PIN 1
#define XPT2046_MOSI 35
#define XPT2046_MISO 37
#define XPT2046_CLK 36
#define XPT2046_CS 18
#define XPT2046_IRQ -1
static const uint8_t ADC1 = 2;
static const uint8_t ADC2 = 3;
#define CAN_RX -1
#define CAN_TX -1
#define I2S_SCLK_PIN 26
#define I2S_DATA_PIN 25
#define PIN_DATA 25
#define BAD_TX 17
#define BAD_RX 16
#define HAS_BTN 0
#define BTN_ALIAS "Ok"
#define BTN_PIN 0
#define BTN_ACT LOW
#define TXLED -1
#define LED_ON HIGH
#define LED_OFF LOW
#define CC1101_SS_PIN 5
#define CC1101_MOSI_PIN 11
#define CC1101_SCK_PIN 12
#define CC1101_MISO_PIN 13
#define NRF24_SS_PIN 4
#define NRF24_MOSI_PIN 11
#define NRF24_SCK_PIN 12
#define NRF24_MISO_PIN 13
#define SDCARD_CS 10
#define SDCARD_SCK 12
#define SDCARD_MISO 13
#define SDCARD_MOSI 11
#define GROVE_SDA 8
#define GROVE_SCL 9
#define SPI_SCK_PIN 12
#define SPI_MOSI_PIN 11
#define SPI_MISO_PIN 13
#define SPI_SS_PIN 10
#endif
