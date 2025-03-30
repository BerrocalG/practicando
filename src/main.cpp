#define F_CPU 16000000UL  
#include <avr/io.h>  
#include <util/delay.h>  

int main(void) {  
    DDRD |= 0xFE;  // Configura PD0 a PD5 como salidas (dos semáforos)  

    while(1) {  
        // **FASE 1: Semáforo 1 en ROJO, Semáforo 2 en azul**  
        PORTD = 0x84;  
        _delay_ms(3000);   

        // **FASE 3: Semáforo 1 en VERDE, Semáforo 2 en ROJO**  
        PORTD = 0x44;   
        _delay_ms(4000);  

        // **FASE :  
        PORTD = 0x30;   
        _delay_ms(3000); 

        // **FASE :  
        PORTD = 0x30;   
        _delay_ms(3000);  

       
    }  
}