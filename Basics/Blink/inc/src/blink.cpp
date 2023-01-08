
#include "blink.hpp"

#include <avr/io.h>

#define __DELAY_BACKWARD_COMPATIBLE__
#include <util/delay.h>

Blink::Blink(/* args */)
{
}

Blink::~Blink()
{
}

void Blink::blink()
{
    PORTB ^= (1 << PB5);
}

void Blink::wait(const uint16_t delay)
{
    _delay_ms(delay);
}