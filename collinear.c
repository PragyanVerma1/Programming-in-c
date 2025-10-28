//WAP to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
//Formula= A = ½|x1(y2 - y3) + x2(y3 - y1) + x3(y1 - y2)
#include<stdio.h>
int main(){
	double x1, y1, x2, y2, x3, y3;
	printf("Name- Pragyan Verma\nSAP ID- 590028276\nCourse- BCA\nBatch- B5");
	printf("\n----------------\n");
	printf("Enter the points : ");
	scanf("%lf %lf %lf %lf %lf %lf", &x1,&y1,&x2,&y2,&x3,&y3);
	double area = 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	if(area==0){
		printf("Collinear");
	}
	else{
		printf("Not Collinear");
	}
	 
	
}





