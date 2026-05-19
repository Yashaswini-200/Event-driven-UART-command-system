#define RING_BUFFER_SIZE 128U
typedef struct{
    uint8_t buffer[RING_BUFFER_SIZE];
    Uint8_t head;
    uint8_t tail;
} RingBuffer;

