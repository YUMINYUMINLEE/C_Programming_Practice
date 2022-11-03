#include <stdio.h>

void main121() {
	int num1 = 10, num2 = 20;
	int* ptr1 = &num1, * ptr2 = &num2;

	(*ptr1) += 10;//num1=20
	(*ptr2) -= 10;//num2=10

  	ptr1 = &num2;
	ptr2 = &num1;

	printf("%d\n", *ptr1);
	printf("%d" ,*ptr2);
}