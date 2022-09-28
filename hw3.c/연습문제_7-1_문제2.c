#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main712(void) {
	int num;
	int i = 0;

	printf("양의정수를 입력하시오.");
	scanf("%d", &num);

	while (i<num) {
		++i;
		printf("%d",3*i);
	}
	return 0;
}
