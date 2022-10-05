#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, Z;

	printf("[AZ+ZA=99가 되는 조합]\n\n");
	for (A = 0; A < 10; A++) {
		for (Z = 0; Z < 10; Z++) {
			if (A * 10 + Z + Z * 10 + A != 99)
				continue;
			printf("A=%d ", A);
			printf(",");
			printf("Z=%d ",Z);
		}
		
		printf("\n");
	}
	return 0;
}
