//Write a program to find the roots of the quadratic equations.
#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c;   
    float d; 
	printf("Name- Pragyan Verma\nSAP ID - 590028276\nCourse- BCA\nBatch- B5");
    printf("\n-----------------\n");          
    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);     
    d = b*b - 4*a*c;
    printf("Roots are for positive : %f",(-b + sqrt(d))/(2*a));
	printf("\n Roots are for negative : %f",(-b - sqrt(d))/(2*a));
    return 0;
}

	


