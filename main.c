#include "hal.h"
#include "ch.h"

int main(void) {
    halInit();
    chSysInit(); 

    while(1) {
        palSetPad(GPIOC, GPIOC_LED);
        chThdSleepMilliseconds(1000);
        palClearPad(GPIOC, GPIOC_LED);
        chThdSleepMilliseconds(1000);
    }
    return 0;
}
