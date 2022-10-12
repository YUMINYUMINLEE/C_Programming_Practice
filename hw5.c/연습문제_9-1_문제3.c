#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int pibnum;

	printf("출력하고자 하는 피보나치 수열의 개수 : ");
	scanf("%d", &pibnum);
	ShowFiboSeries(pibnum);
}

void ShowFiboSeries(int pibnum) {
	int i, num0 = 0, num1 = 1, result;
	if (pibnum == 1)
		printf("%d", num0);
	else if (pibnum == 1) {
		printf("%d ", num0);
		printf("%d ", num1);
	}
	else {
		printf("%d ", num0);
		printf("%d ", num1);
		for (i = 0; i < pibnum - 2; i++) {
			result = num0 + num1;
			num0 = num1;
			num1 = result;
			printf("%d ", num1);
		}
	}
}