#define MICROPY_HW_BOARD_NAME "BDMICRO VINA-D51"
#define MICROPY_HW_MCU_NAME "samd51n20"

#define CIRCUITPY_MCU_FAMILY samd51

// These are pins not to reset.
// Don't reset QSPI data pins
#define MICROPY_PORT_A (PORT_PA08 | PORT_PA09 | PORT_PA10 | PORT_PA11)
#define MICROPY_PORT_B (PORT_PB10 | PORT_PB11)
#define MICROPY_PORT_C (0)
#define MICROPY_PORT_D (0)

#define BOARD_HAS_CRYSTAL 1

#define DEFAULT_I2C_BUS_SDA (&pin_PB02)
#define DEFAULT_I2C_BUS_SCL (&pin_PB03)
#define DEFAULT_SPI_BUS_MISO (&pin_PB23)
#define DEFAULT_UART_BUS_TX (&pin_PB24)
#define DEFAULT_UART_BUS_RX (&pin_PB25)
#define DEFAULT_SPI_BUS_MOSI (&pin_PC27)
#define DEFAULT_SPI_BUS_SCK (&pin_PC28)
#define MICROPY_HW_LED_STATUS (&pin_PA15)
#define MICROPY_HW_LED_RX (&pin_PC05)
#define MICROPY_HW_LED_TX (&pin_PC06)

// USB is always used internally so skip the pin objects for it.
#define IGNORE_PIN_PA24 1
#define IGNORE_PIN_PA25 1
