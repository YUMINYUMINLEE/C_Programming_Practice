#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main713(void) {
	int num = 1;
	int sum = 0;


	while (num != 0) {
		printf("������ �Է��Ͻÿ�.");
		scanf("%d", &num);
		sum += num;
	}
	printf("sum=%d\n", sum);
	return 0;
}