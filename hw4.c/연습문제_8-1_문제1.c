#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main831(void) {
	
	int num=1;
	while (num < 100) {

		if (num % 7 == 0 || num % 9 == 0)
			printf("7�Ǵ� 9�� ��� %d\n", num);
		num++;
	}

//i++/i*7/i<15/i=0
//k++ / k * 9 / k < 7 / k = 0
//k++ / k * 9 / 7 < k && k < 12 / k = 8 �� �ҷ��� �ߴµ� ||�� �����ϰ� ����...