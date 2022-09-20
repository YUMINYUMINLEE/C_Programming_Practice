#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double dou1, dou2;

	printf("사칙연산을 진행할 두 실수를 입력하시오.");
	scanf(" %lf %lf", &dou1, &dou2);
	printf("두 실수의 합= %f ",dou1+dou2);
	printf("두 실수의 차= %f ", dou1 - dou2);
	printf("두 실수의 곱= %f ", dou1 * dou2);
	printf("두 실수의 나눗셈(몫)= %f ", dou1 / dou2);
	printf("두 실수의 나눗셈(몫)= %f ", dou1-(dou2*(dou1/dou2)));

	return 0;

}