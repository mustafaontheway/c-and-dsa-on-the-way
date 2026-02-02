#include <stdio.h>

int main() {

    // row - column

    int quarterly_amounts[4][3]= {{5, 12, 21}, {96, 4, 14}, {87, 85, 11}, {99, 21, 787}};

    int month_counter = 1;

    for (int i= 0; i < 4; i++) {

        for (int j = 0; j < 3; j++) {

            printf("Month %d quantity: %d\n", month_counter, quarterly_amounts[i][j]);

            month_counter++;
        }
    }

    return 0;
}

// Month 1 quantity: 5 
// Month 2 quantity: 12
// Month 3 quantity: 21
// Month 4 quantity: 96
// Month 5 quantity: 4
// Month 6 quantity: 14
// Month 7 quantity: 87
// Month 8 quantity: 85
// Month 9 quantity: 11
// Month 10 quantity: 99
// Month 11 quantity: 21
// Month 12 quantity: 787
