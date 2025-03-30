#define F_CPU 16000000UL  
#include <avr/io.h>  
#include <util/delay.h>  

int main(void) {  
    DDRD |= 0xFE;  // Configura PD0 a PD5 como salidas (dos semáforos) 

    while(1) {  
        // **FASE 1: Semáforo 1 en ROJO, Semáforo 2 en verde  
        PORTD = 0x84;  
        _delay_ms(3000);   

        // **FASE 3: Semáforo 1 en AMARILLO, Semáforo 2 en VERDE   
        PORTD = 0x44;   
        _delay_ms(1000);  

        // **FASE :  semaforo 1 en verde; semaforo 2 en rojo
        PORTD = 0x30;   
        _delay_ms(3000); 

        // **FASE :  Semaforo 1 en verde; semaforo 2 en amarillo
        PORTD = 0x28;   
        _delay_ms(1000); //
    }   
}