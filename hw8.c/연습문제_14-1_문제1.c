#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int SquareByValue(int num) {
	return num * num;
}
void SquareByPointer(int* ptr1, int* ptr2) {
	*ptr2 = (*ptr1) * (*ptr1);
}
void main5() {
	int num;
	int num2;
	printf("제곱하고 싶은 숫자를 입력하시오.:");
	scanf("%d", &num);
	printf("%d의 제곱: %d\n",num,SquareByValue(num));
	SquareByPointer(&num, &num2);
	printf("%d의 제곱: %d\n", num, num2);
}