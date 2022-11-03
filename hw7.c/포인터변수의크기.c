#include <stdio.h>

void main1() {
	int num = 0;
	int* x = &num;
	printf("%zu", sizeof(x));

}