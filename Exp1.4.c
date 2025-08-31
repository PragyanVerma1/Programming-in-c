4.//Write a program in C to perform four arithmetic opertions on two variables
#include<stdio.h>
int main() {
    int a, b;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    printf("Enter the value of b : ");
    scanf("%d", &b);
    printf("The sum is %d", a+b 
    );
    printf("The subtraction is %d", a-b);
    printf("THe multiplication is %d", a*b);
    float div = a/b;
    printf("The division is %f", div);
    return 0;
}


