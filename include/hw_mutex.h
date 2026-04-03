#ifndef HW_MUTEX_H
#define HW_MUTEX_H

#if defined(ARDUINO_ESP32_DIV_V2_0)

extern bool hw_buzzer_active;
extern bool hw_nrf_u3_active;
extern bool hw_ir_active;

void acquireBuzzer();
void releaseBuzzer();
void acquireNRF24_U3();
void acquireIR();

#else

// Stubs for other boards
static inline void acquireBuzzer() {}
static inline void releaseBuzzer() {}
static inline void acquireNRF24_U3() {}
static inline void acquireIR() {}

#endif // ARDUINO_ESP32_DIV_V2_0

#endif // HW_MUTEX_H
