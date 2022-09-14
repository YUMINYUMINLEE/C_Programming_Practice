#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;

	printf("제곱 할 정수 하나를 입력하시오.");
	scanf("%d", &num1);
	printf("입력한 정수는 %d 입니다.\n", num1);

	int square_of_num1 = num1 * num1;

	printf("%d의 제곱:%d\n", num1,square_of_num1);

	return 0;
}
//풀이:*연산자 사용