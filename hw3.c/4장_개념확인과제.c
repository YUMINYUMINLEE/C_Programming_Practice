#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main4(void)
{
	int x, y, z;
	for (x = 0; x < 5; x++)
	{
		for (y = x; y <4; y++) {
			printf(" ");
		}
		for (z = 0; z <= (x * 2); z++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
//외부for문:줄바꿈을 위한것,내부for1=공백을 위함,내부for2=*을 표시함
