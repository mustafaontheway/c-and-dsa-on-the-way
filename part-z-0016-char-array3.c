#include <stdio.h>

int main() {

    char name[] = {'m', 'u', 's', 't', 'a', 'f', 'a', '\0'};

    printf("My name is: %s\n", name); // My name is: mustafa

    printf("Address of my name is (pointer): %p", name);

    return 0;
}

// My name is: mustafa
// Address of my name is (pointer): 00000045CC5FFBF8
