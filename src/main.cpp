#define F_CPU 16000000UL  
#include <avr/io.h>  
#include <util/delay.h>  

int main(void) {  
    DDRD |= 0xFE;  // Configura PD1 a PD7 como salidas (PD0 como entrada si es necesario)  

    while(1) {  
        // **FASE 1: Semáforo 1 en ROJO, Semáforo 2 en AZUL**  
        PORTD = 0x84;  
        _delay_ms(3000);   

        // **FASE 2: Semáforo 1 en VERDE, Semïoro 2 en ROJO**  
        PORTD = 0x44;   
        _delay_ms(4000);  

        // **FASE 3: Semáforo 1 en AMARILLO, Semáforo 2 en ROJO**  
        PORTD = 0x30;   
        _delay_ms(3000); 

        PORTD = 0x28;   
        _delay_ms(3000); 

        // **FASE 4: Semáforo 1 en ROJO, Semáforo 2 en VERDE**  
        PORTD = 0x21;   
        _delay_ms(4000);  
    }  
}