
#define F_CPU 16000000UL  
#include <avr/io.h>  
#include <util/delay.h>  

int main(void) {   
    DDRD |= 0xFC;  // Configura PD2 a PD7 como salidas (PD0 como entrada si es necesario)  

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

