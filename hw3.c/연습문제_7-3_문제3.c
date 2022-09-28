#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int dan = 1, num = 1;

	do {
		num = 1;
		printf("\n");
		do {
			printf(" % d X % d = % d\n", dan, num, dan * num);
			num++;
		} while (num < 10);
		dan++;
	}
	while (dan < 10);

	return 0;
}