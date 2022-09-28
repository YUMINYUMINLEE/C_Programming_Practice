#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main742(void) {
	int num, result, i = 1;
	printf("정수입력");
	scanf(" %d", &num);
	for (result = 1; i <= num;i++) {
		result *= i;
			
	}
	printf("%d!:%d", num,result);

	return 0;
}//카운터 변수 사용하는 습관을 들여보자