/* EJERCICIO 1 PARTE 2
#define F_CPU 16000000UL  
#include <avr/io.h>  
#include <util/delay.h>  

int main(void) {   
    DDRD |= 0xFC;   

    while(1) {  
        // **FASE 1 
        PORTD = 0x84;  
        _delay_ms(3000);   

        // **FASE 2:   
        PORTD = 0x44;   
        _delay_ms(3000);  

        // **FASE 3: S  
        PORTD = 0x30;   
        _delay_ms(3000); 

        PORTD = 0x28;   
        _delay_ms(2000); 

         
    }  
}
*/ 
//EJERCICIO 1 PARTE 1
#define F_CPU 16000000UL  
#include <avr/io.h>  
#include <util/delay.h>  

int main(void) {  
    DDRD |= 0xE0; 

    while(1) {  
        // *Fase 1: Enciende VERDE (D5)*
        PORTD = 0x20;   
        _delay_ms(3000);    

        // *Fase 2: Enciende AMARILLO (D6)*
        PORTD = 0x40;   
        _delay_ms(3000);    

        // *Fase 3: Enciende ROJO (D7)*
        PORTD = 0x80;   
        _delay_ms(3000);  
    }  
}
