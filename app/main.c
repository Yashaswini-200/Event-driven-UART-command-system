#include <stdint.h>
#include <stdbool.h>
#include "uart.h"
int main(){
    uart_init();
    while(1){
        if(uart_available()){
            uint8_t data;
            if(uart_read_byte(&data)){
                
                uart_write_byte(data);
            }
        }
    }
    return 0;
}
