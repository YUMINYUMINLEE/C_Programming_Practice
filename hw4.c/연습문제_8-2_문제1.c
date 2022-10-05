#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int dan, i;
	for (dan = 1; dan < 10; dan++) {
		if (dan % 2 != 0)
			continue;
		for (i = 1; i <= dan; i++) {
			printf("%d x %d = %d\n", dan,i,dan * i);
		}
		printf("\n");
	}
	return 0;
}

