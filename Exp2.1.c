#include<stdio.h>
int main(){
    int a, b;
    printf("Name- Pragyan Verma\nSAP ID - 590028276\nCourse- BCA\nBatch- B5");
    printf("\n-----------------\n");
    printf("Enter length : ");
    scanf("%d", &a);
    printf("Enter width : ");
    scanf("%d", &b);
    int area = a*b;
    printf("The area of rectangle is %d", area);
    int perimeter= 2*(a+b);
    printf("\nThe perimeter is  %d", perimeter);
    return 0;
}
