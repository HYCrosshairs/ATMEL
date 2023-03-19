#ifndef LED_H
#define LED_H

class Led 
{
public:
    Led(uint8_t pin);
    void on();
    void off();
    void toggle();
    
private:
    uint8_t pin;
};

#endif // LED_H