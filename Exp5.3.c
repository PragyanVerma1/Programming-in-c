#include <stdio.h>

int main() {
    int x = 10;

    printf("x in main block: %d\n", x);

    {
        int y = 20;
        printf("x inside inner block: %d\n", x);
        printf("y inside inner block: %d\n", y);
    }

    {
        int z = 30;
        printf("z inside second block: %d\n", z);
    }

    return 0;
}
