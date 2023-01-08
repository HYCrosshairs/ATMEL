#include <avr/io.h>
#include "blink.hpp"

int main(void)
{
    Blink blk;
    DDRB |= (1 << PB5);
    while(true){
        blk.blink();
        blk.wait(1000);
    }
}