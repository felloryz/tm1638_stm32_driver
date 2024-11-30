#include <stdint.h>
#include "main.h"

typedef union _t_tm1638_byte {
    struct {
        uint8_t b0 : 1;
        uint8_t b1 : 1;
        uint8_t b2 : 1;
        uint8_t b3 : 1;
        uint8_t b47 : 4;
    };
    struct {
        uint8_t a : 1;
        uint8_t b : 1;
        uint8_t c : 1;
        uint8_t d : 1;
        uint8_t e : 1;
        uint8_t f : 1;
        uint8_t g : 1;
        uint8_t dp : 1;
    };
    uint8_t byte;
} t_tm1638_byte;


const t_tm1638_byte DISP_COM_AUTO_WRITE  = { .b47=0x4, .b3=0, .b2=0, .b1=0, .b0=0 };
const t_tm1638_byte DISP_COM_AUTO_READ   = { .b47=0x4, .b3=0, .b2=0, .b1=1, .b0=0 };
const t_tm1638_byte DISP_COM_FIXED_WRITE = { .b47=0x4, .b3=0, .b2=1, .b1=0, .b0=0 };
const t_tm1638_byte DISP_COM_FIXED_READ  = { .b47=0x4, .b3=0, .b2=1, .b1=1, .b0=0 };

const t_tm1638_byte DISP_CTRL_OFF        = { .b47=0x8, .b3=0, .b2=0, .b1=0, .b0=0 };
const t_tm1638_byte DISP_CTRL_ON_1_16    = { .b47=0x8, .b3=1, .b2=0, .b1=0, .b0=0 };
const t_tm1638_byte DISP_CTRL_ON_2_16    = { .b47=0x8, .b3=1, .b2=0, .b1=0, .b0=1 };
const t_tm1638_byte DISP_CTRL_ON_4_16    = { .b47=0x8, .b3=1, .b2=0, .b1=1, .b0=0 };
const t_tm1638_byte DISP_CTRL_ON_10_16   = { .b47=0x8, .b3=1, .b2=0, .b1=1, .b0=1 };
const t_tm1638_byte DISP_CTRL_ON_11_16   = { .b47=0x8, .b3=1, .b2=1, .b1=0, .b0=0 };
const t_tm1638_byte DISP_CTRL_ON_12_16   = { .b47=0x8, .b3=1, .b2=1, .b1=0, .b0=1 };
const t_tm1638_byte DISP_CTRL_ON_13_16   = { .b47=0x8, .b3=1, .b2=1, .b1=1, .b0=0 };
const t_tm1638_byte DISP_CTRL_ON_14_16   = { .b47=0x8, .b3=1, .b2=1, .b1=1, .b0=1 };

#define DISP_ADDR_00H_BASE          0xC0
const t_tm1638_byte DISP_ADDR_00H = { .byte = DISP_ADDR_00H_BASE + 0x0 };
const t_tm1638_byte DISP_ADDR_01H = { .byte = DISP_ADDR_00H_BASE + 0x1 };
const t_tm1638_byte DISP_ADDR_02H = { .byte = DISP_ADDR_00H_BASE + 0x2 };
const t_tm1638_byte DISP_ADDR_03H = { .byte = DISP_ADDR_00H_BASE + 0x3 };
const t_tm1638_byte DISP_ADDR_04H = { .byte = DISP_ADDR_00H_BASE + 0x4 };
const t_tm1638_byte DISP_ADDR_05H = { .byte = DISP_ADDR_00H_BASE + 0x5 };
const t_tm1638_byte DISP_ADDR_06H = { .byte = DISP_ADDR_00H_BASE + 0x6 };
const t_tm1638_byte DISP_ADDR_07H = { .byte = DISP_ADDR_00H_BASE + 0x7 };
const t_tm1638_byte DISP_ADDR_08H = { .byte = DISP_ADDR_00H_BASE + 0x8 };
const t_tm1638_byte DISP_ADDR_09H = { .byte = DISP_ADDR_00H_BASE + 0x9 };
const t_tm1638_byte DISP_ADDR_0AH = { .byte = DISP_ADDR_00H_BASE + 0xA };
const t_tm1638_byte DISP_ADDR_0BH = { .byte = DISP_ADDR_00H_BASE + 0xB };
const t_tm1638_byte DISP_ADDR_0CH = { .byte = DISP_ADDR_00H_BASE + 0xC };
const t_tm1638_byte DISP_ADDR_0DH = { .byte = DISP_ADDR_00H_BASE + 0xD };
const t_tm1638_byte DISP_ADDR_0EH = { .byte = DISP_ADDR_00H_BASE + 0xE };
const t_tm1638_byte DISP_ADDR_0FH = { .byte = DISP_ADDR_00H_BASE + 0xF };

const t_tm1638_byte DISP_LED_ON       = { .b47=0x00, .b3=0, .b2=0, .b1=0, .b0=1 };
const t_tm1638_byte DISP_LED_OFF      = { .b47=0x00, .b3=0, .b2=0, .b1=0, .b0=0 };

const t_tm1638_byte DISP_7SEG_NONE    = { .dp=0, .g=0, .f=0, .e=0, .d=0, .c=0, .b=0, .a=0 };
const t_tm1638_byte DISP_7SEG_NUM_0   = { .dp=0, .g=0, .f=1, .e=1, .d=1, .c=1, .b=1, .a=1 };
const t_tm1638_byte DISP_7SEG_NUM_1   = { .dp=0, .g=0, .f=0, .e=0, .d=0, .c=1, .b=1, .a=0 };
const t_tm1638_byte DISP_7SEG_NUM_2   = { .dp=0, .g=1, .f=0, .e=1, .d=1, .c=0, .b=1, .a=1 };
const t_tm1638_byte DISP_7SEG_NUM_3   = { .dp=0, .g=1, .f=0, .e=0, .d=1, .c=1, .b=1, .a=1 };
const t_tm1638_byte DISP_7SEG_NUM_4   = { .dp=0, .g=1, .f=1, .e=0, .d=0, .c=1, .b=1, .a=0 };
const t_tm1638_byte DISP_7SEG_NUM_5   = { .dp=0, .g=1, .f=1, .e=0, .d=1, .c=1, .b=0, .a=1 };
const t_tm1638_byte DISP_7SEG_NUM_6   = { .dp=0, .g=1, .f=1, .e=1, .d=1, .c=1, .b=0, .a=1 };
const t_tm1638_byte DISP_7SEG_NUM_7   = { .dp=0, .g=0, .f=0, .e=0, .d=0, .c=1, .b=1, .a=1 };
const t_tm1638_byte DISP_7SEG_NUM_8   = { .dp=0, .g=1, .f=1, .e=1, .d=1, .c=1, .b=1, .a=1 };
const t_tm1638_byte DISP_7SEG_NUM_9   = { .dp=0, .g=1, .f=1, .e=0, .d=1, .c=1, .b=1, .a=1 };

void init_gpio(void)
{
    // PA5 - SPI1_SCK
    // PA7 - SPI1_MOSI
    // PA4 - SPI1_NSS

    RCC->APB2ENR |= RCC_APB2ENR_AFIOEN | RCC_APB2ENR_IOPAEN; // peripheral clock enable

    GPIOA->CRL &= ~(GPIO_CRL_MODE4 | GPIO_CRL_MODE5 | GPIO_CRL_MODE7);
    GPIOA->CRL |= (GPIO_CRL_MODE4_1 | GPIO_CRL_MODE5_1 | GPIO_CRL_MODE7_1); // Output mode, max speed 2 MHz
    GPIOA->CRL &= ~(GPIO_CRL_CNF4 | GPIO_CRL_CNF5 | GPIO_CRL_CNF7);
    GPIOA->CRL |= (GPIO_CRL_CNF5_1 | GPIO_CRL_CNF7_1); // Alternate function output Push-pull

}

void init_spi(void)
{
    RCC->APB2ENR |= RCC_APB2ENR_SPI1EN;

    SPI1->CR1 &= ~SPI_CR1_BR_2; // BR[2:0] = 3'b011
    SPI1->CR1 |= (SPI_CR1_BR_0 | SPI_CR1_BR_1); // fPCLK/16
    SPI1->CR1 |= SPI_CR1_CPHA;
    SPI1->CR1 |= SPI_CR1_CPOL;
    SPI1->CR1 &= ~SPI_CR1_DFF; // 8-bit data frame format
    SPI1->CR1 |= SPI_CR1_LSBFIRST; // LSB transmitted first
    SPI1->CR1 |= SPI_CR1_MSTR; // Master configuration
    SPI1->CR1 |= SPI_CR1_SSM;
    SPI1->CR1 |= SPI_CR1_SSI;
    SPI1->CR1 &= ~SPI_CR1_BIDIMODE;
    SPI1->CR1 &= ~SPI_CR1_RXONLY;
    SPI1->CR1 |= SPI_CR1_SPE; // SPI enable
}

void deinit_spi(void)
{
    while(!(SPI1->SR & SPI_SR_TXE));
    while(SPI1->SR & SPI_SR_BSY);
    SPI1->CR1 &= ~SPI_CR1_SPE; // SPI disable
    SPI1->CR1 = 0;
    RCC->APB2ENR &= ~RCC_APB2ENR_SPI1EN;
}

void spi_send(const uint8_t data)
{
    SPI1->DR = data;
    while(!(SPI1->SR & SPI_SR_TXE));
}

uint8_t get_number(uint8_t x)
{
    switch (x)
    {
        case 0: return DISP_7SEG_NUM_0.byte;
        case 1: return DISP_7SEG_NUM_1.byte;
        case 2: return DISP_7SEG_NUM_2.byte;
        case 3: return DISP_7SEG_NUM_3.byte;
        case 4: return DISP_7SEG_NUM_4.byte;
        case 5: return DISP_7SEG_NUM_5.byte;
        case 6: return DISP_7SEG_NUM_6.byte;
        case 7: return DISP_7SEG_NUM_7.byte;
        case 8: return DISP_7SEG_NUM_8.byte;
        case 9: return DISP_7SEG_NUM_9.byte;
        default: return DISP_7SEG_NONE.byte;
    }
}

void delay(void);

int main(void)
{
    uint8_t num = 0;

    init_gpio();
    init_spi();

    GPIOA->BSRR = GPIO_BSRR_BR4;
    spi_send(DISP_COM_FIXED_WRITE.byte);
    while(SPI1->SR & SPI_SR_BSY);
    GPIOA->BSRR = GPIO_BSRR_BS4;

    GPIOA->BSRR = GPIO_BSRR_BR4;
    spi_send(DISP_ADDR_00H.byte);
    spi_send(get_number(num));
    while(SPI1->SR & SPI_SR_BSY);
    GPIOA->BSRR = GPIO_BSRR_BS4;

    GPIOA->BSRR = GPIO_BSRR_BR4;
    spi_send(DISP_CTRL_ON_10_16.byte);
    while(SPI1->SR & SPI_SR_BSY);
    GPIOA->BSRR = GPIO_BSRR_BS4;

}
