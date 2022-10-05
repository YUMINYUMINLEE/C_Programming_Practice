#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2,result;

	printf("정수 두개 입력:");
	scanf(" %d %d", &num1, &num2);
	if (num1 > num2)
		result = num1 - num2;
	else
		result = num2 - num1;
	printf("큰수에서 작은수 빼기:%d", result);

	return 0;
}