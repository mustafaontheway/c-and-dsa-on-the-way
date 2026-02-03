#include <stdio.h>
#include <string.h>

// https://www.ascii-code.com/

int main() {

    char first_name[50] = "Mustafa";

    char last_name[50] = "Buyukdereli";

    // strcat(first_name, last_name);

    // printf("%s\n", first_name); // MustafaBuyukdereli

    strcat(first_name, " ");

    strcat(first_name, last_name);

    printf("%s\n", first_name); // Mustafa Buyukdereli

    return 0;
}

