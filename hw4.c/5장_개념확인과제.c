#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n,i;
	printf("양의정수를 입력하시오:");
	scanf(" %d", &n);
	if (n < 1) {
		printf("양의 정수가 아닙니다.");
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
