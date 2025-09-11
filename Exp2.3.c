//Write a program to calculate compound interest
//Formula A= P( 1 +  r/100)^N -P
#include<stdio.h>
#include<math.h>
int main(){
	float R, N;
	int P;
	printf("Name- Pragyan Verma\nSAP ID - 590028276\nCourse- BCA\nBatch- B5");
    printf("\n-----------------\n");
	printf("Enter the value of P : ");
	scanf("%d", &P);
	printf("Enter the value of R : ");
	scanf("%f", &R);
	printf("Enter the value of N : ");
	scanf("%f", &N);
	float A= P*(pow((1 + R/100), N))- P;
	printf("The CI is %f", A);
	return 0;
}
