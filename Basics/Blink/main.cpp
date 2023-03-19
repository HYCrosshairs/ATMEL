#include "Led.hpp"

#include <util/delay.h>

int main(void)
{
    Led led(13);
    
    while(true)
    {
        led.toggle();
        _delay_ms(200);
    }
}