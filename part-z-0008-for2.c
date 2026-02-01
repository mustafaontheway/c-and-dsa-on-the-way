#include <stdio.h>

int main() {

    for (int i = 1; i <= 10; i++) {

        if (i % 2 == 0) {

            printf("%d is even\n", i);

        } else {

            printf("%d is odd\n", i);
        }
    }

    return 0;
}

// 1 is odd
// 2 is even
// 3 is odd
// 4 is even
// 5 is odd
// 6 is even
// 7 is odd
// 8 is even
// 9 is odd
// 10 is even
