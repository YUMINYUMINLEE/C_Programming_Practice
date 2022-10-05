#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main814(void) {

	int num1,num2;

	printf("정수 두개 입력:");
	scanf(" %d %d", &num1,&num2);

	int result = num1 > num2 ? num1 - num2 : num2 - num1;
	printf("큰수에서 작은수 빼기:%d", result);

	return 0;
}