#include<stdint.h>
#include<stdbool.h>
#include "ring_buffer.h"
static RingBuffer rx_buffer;
void uart_init(){
    rb_init(&rx_buffer);
}
bool uart_available(){
    return !rb_empty(&rx_buffer);
}
bool uart_read_byte(uint8_t *data){
   return rb_pop(&rx_buffer, data);
}
bool uart_write_byte(uint8_t data){
    
}