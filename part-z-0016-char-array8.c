#include <stdio.h>
#include <string.h>

int main() {

    char first_name[50] = "Mustafa";

    char last_name[50] = "Buyukdereli";

    strcat(first_name, " ");

    strncat(first_name, last_name, 1);

    printf("%s\n", first_name); // Mustafa B

    return 0;
}

