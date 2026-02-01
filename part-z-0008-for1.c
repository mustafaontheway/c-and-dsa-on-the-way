#include <stdio.h>

int main() {

    int counter = 0;

    for (int i = 1; i <= 10; i++) {

        counter += i;

        printf("Counter value: %d\n", counter);
    }

    return 0;
}

// Counter value: 1
// Counter value: 3
// Counter value: 6
// Counter value: 10
// Counter value: 15
// Counter value: 21
// Counter value: 28
// Counter value: 36
// Counter value: 45
// Counter value: 55
