#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main722(void) {
	int i = 0, k = 0;

	while (i < 5) {
		while (k < i) {
			printf("0");
			k++;
		}
		k = 0;
		printf("*\n");
		i++;
	}
	return 0;
}