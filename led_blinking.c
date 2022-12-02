#ifndef F_CPU //if F_CPU was not defined in Project -> Properties
#define F_CPU 1000000UL //define it now 16MHz unsigned long
#endif      

#include <xc.h>
#include <avr/io.h> //this is always included in AVR programs
#include <util/delay.h>//add this to use the delay function

int main(void)
{
DDRA = 0b00000001; //indica que el puerto es de entrada o salida 
PORTA = 0b00000001;
while(1)
    {
    
     PORTA = 1;
     _delay_ms(500); //so that LED would remain in ON state for 1 sec and then  turns off  for  1 sec.     
     PORTA = 0;
     _delay_ms(500);
     
    }
}
