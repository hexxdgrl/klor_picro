#pragma once

// Split communications

#define SERIAL_USE_MULTI_TRANSACTION
#define USE_SERIAL
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP1
#define SERIAL_USART_RX_PIN GP4
#define SERIAL_USE_MULTI_TRANSACTION
#define SPLIT_USB_DETECT
#define I2C1_SDA_PIN GP2
#define I2C1_SCL_PIN GP3

// Encoder config

#define ENCODERS_PAD_A       { GP28 }
#define ENCODERS_PAD_B       { GP29 }
#define ENCODERS_PAD_A_RIGHT { GP29 }
#define ENCODERS_PAD_B_RIGHT { GP28 }
#define ENCODER_RESOLUTION 2

// OLED

#ifdef OLED_ENABLE
#    define OLED_DISPLAY_128X64
#    define SPLIT_OLED_ENABLE
#    define OLED_FONT_H  "./lib/glcdfont.c"
#endif

// Trackball, Audio, Haptics and RGB ommitted for now.
