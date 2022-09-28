#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main741(void) {
	int num1, num2, total = 0;
	printf("정수 두개 입력");
	scanf("%d %d", &num1, &num2);
	for (; num1 < num2 + 1;num1++) {
		total += num1;
	}
	printf("total:%d", total);

	return 0;
}