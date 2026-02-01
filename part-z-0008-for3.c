#include <stdio.h>

int main() {

    int sum_even_nums = 0;

    for (int i = 1; i <= 10; i++) {

        if (i % 2 == 0) {

            sum_even_nums += i;
        } 

    }

    printf("Sum of even numbers: %d", sum_even_nums);

    return 0;
}

// Sum of even numbers: 30
