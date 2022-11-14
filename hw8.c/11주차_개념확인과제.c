#define _CRT_SECURE_NO_WARNINGS 
#include <math.h>
#include <stdio.h>

void StandardDevitation(double* ptr) {
	double standardDevitation1 = 0;

	for (int i = 0; i < 5; i++) {
		standardDevitation1 += pow((4 / 5 * (*(ptr+i*sizeof(double)))), 2);
	}
	
	*ptr=sqrt(standardDevitation1 /5);
	
}
	
void main() {
	double arr[5];

	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++)
		scanf("%lf",&arr[i]);
	
	printf("\n");
	StandardDevitation(arr);
	printf("Standard Detivation = %f", *arr);
	

}