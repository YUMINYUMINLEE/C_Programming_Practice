#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int num1, num2,result;

	printf("���� �ΰ� �Է�:");
	scanf(" %d %d", &num1, &num2);
	if (num1 > num2)
		result = num1 - num2;
	else
		result = num2 - num1;
	printf("ū������ ������ ����:%d", result);

	return 0;
}