#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n,i;
	printf("���������� �Է��Ͻÿ�:");
	scanf(" %d", &n);
	if (n < 1) {
		printf("���� ������ �ƴմϴ�.");
	}
	else if (n == 1) {
		printf("It is not a prime number");
	}
	else {
		for (i = 2; i < n; i++) {
			if (n % i == 0) 
			break;	
		}
			if (n==i)
				printf("It is a prime number.");
			else
			printf("It is not a prime number.");
		}
	}
