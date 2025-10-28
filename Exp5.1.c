#include <stdio.h>

int globalVar = 10;

void function1() {
    printf("Inside function1, globalVar = %d\n", globalVar);
}

void function2() {
    globalVar += 5;
    printf("Inside function2, globalVar = %d\n", globalVar);
}

int main() {
    printf("Inside main, globalVar = %d\n", globalVar);
    function1();
    function2();
    printf("After function calls, globalVar = %d\n", globalVar);
    return 0;
}
