#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main814(void) {

	int num1,num2;

	printf("���� �ΰ� �Է�:");
	scanf(" %d %d", &num1,&num2);

	int result = num1 > num2 ? num1 - num2 : num2 - num1;
	printf("ū������ ������ ����:%d", result);

	return 0;
}