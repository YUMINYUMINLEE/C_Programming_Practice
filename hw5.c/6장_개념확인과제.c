#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int power(int n) {
	if (n == 0 || n == 1)
		printf("%d", n);

	else {
		power(n / 2);
		printf("%d", n % 2);
	}
}

int main(void) {
	int n;
	printf("2진수로 바꿀 10진수 입력: ");
	scanf("%d", &n);
	power(n);
	return 0;
}