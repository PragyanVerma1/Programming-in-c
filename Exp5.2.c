#include <stdio.h>

int globalVar = 100;

void myFunction() {
    int localVar = 50;
    printf("Inside function:\n");
    printf("Local variable: %d\n", localVar);
    printf("Global variable: %d\n", globalVar);
}

int main() {
    myFunction();

    printf("Outside function, globalVar: %d\n", globalVar);

    return 0;
}
