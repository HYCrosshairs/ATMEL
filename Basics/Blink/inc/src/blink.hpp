#pragma once

#include <stdint.h>

class Blink
{
private:
    /* data */
public:
    Blink(/* args */);
    ~Blink();

    void blink();

    void wait(const uint16_t delay);
};
