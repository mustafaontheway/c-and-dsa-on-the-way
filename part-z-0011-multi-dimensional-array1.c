#include <stdio.h>

int main() {

    // row - column

    int quarterly_amounts[4][3]= {{5, 12, 21}, {96, 4, 14}, {87, 85, 11}, {99, 21, 787}};

    printf("Max amount: %d", quarterly_amounts[3][2]); // Max amount: 787

    return 0;
}

