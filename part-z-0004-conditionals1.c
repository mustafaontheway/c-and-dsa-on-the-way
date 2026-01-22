#include <stdio.h>
#include <stdint.h>

int main() {

    uint32_t sales = 500000;

    uint16_t premium = 0;

    if (sales >= 500000) {

        premium = 3000;

    } else if (sales >= 250000) {

        premium = 2000;

    } else {

        premium = 500;
    }
    
    printf("Sales premium: %u", premium);  // Sales premium: 3000

}
