#include <avr/io.h>
#include <util/delay.h>

// Pollin Evaluationboard 2.0.1: LED1 ueber JP6 an PD5 (DIP-Pin 9).
// HIGH schaltet die LED ein; der Vorwiderstand ist auf dem Board.
int main(void)
{
    PORTD &= ~_BV(PD5);
    DDRD |= _BV(PD5);

    for (;;) {
        PORTD |= _BV(PD5);
        _delay_ms(500);
        PORTD &= ~_BV(PD5);
        _delay_ms(500);
    }
}
