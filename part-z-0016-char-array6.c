#include <stdio.h>
#include <string.h>

int main() {

    char greet[] = "hi";

    char new_greet[] = "Hi";

    int result = strcmp(greet, new_greet);

    // printf("%d", result); // 1

    if (result == 0) {

        printf("%s = %s", greet, new_greet);
      
    } else {

        printf("They are not same!");
    }

    return 0;
}

