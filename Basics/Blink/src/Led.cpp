#include "Led.hpp"

#include <avr/io.h>

Led::Led(uint8_t pin) 
{
    pin = pin;
    pinMode(pin, OUTPUT);
}

void Led::on()
{
    digitalWrite(pin, HIGH);
}

void Led::off()
{
    digitalWrite(pin, LOW);
}

void Led::toggle()
{
    digitalWrite(pin, !digitalRead(_pin));
}