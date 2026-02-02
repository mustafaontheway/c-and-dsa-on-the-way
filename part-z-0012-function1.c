#include <stdio.h>

void greet() {

    printf("Hi there!\n");
}

int return_year() {

    return 2026;
}

int main() {

    greet();
    greet();

    int year_data = return_year();

    printf("Year is %d", year_data);

    return 0;
}

// Hi there!
// Hi there!
// Year is 2026

