#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main731(void) {
	int total = 0, num = 0;
	printf("정수입력(0 to quit):");
	scanf(" %d", &num);
	total += num;


	while (num!=0) {
		printf("정수입력(0 to quit):");
		scanf(" %d", &num);
		total += num;

	}
	printf("합계:%d\n", total);


	return 0;
}