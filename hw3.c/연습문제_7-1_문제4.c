#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main714(void) {
	int dan = 1, num = 9;
	scanf(" %d", &dan);

		while (num >0) {
			printf(" % d X % d = % d\n", dan, num, dan * num);
			num--;
		}
	return 0;
}