#include <stdio.h>

void sum(int x, int y, int z) {

    printf("%d + %d + %d = %d", x, y, z, x + y + z);
}


int main() {

    sum(17, 1777, 177777); // 17 + 1777 + 177777 = 179571

    return 0;
}

