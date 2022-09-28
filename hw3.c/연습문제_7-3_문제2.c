#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main732(void) {
	int num = 2, sum=0;
	do {
		sum += num;
		num += 2;
	}
	while (num <101);
	printf("sum:%d", sum);
	return 0;
}