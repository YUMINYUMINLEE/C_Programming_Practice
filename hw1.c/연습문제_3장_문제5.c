#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;
	int num2;
	int num3;

	printf("연산을 진행할 세 정수를 입력하시오.");
	scanf("%d %d %d", &num1,&num2,&num3);
	printf("입력한 정수는 num1:%d,num2:%d,num3:%d입니다.\n", num1, num2,num3);
	printf("(num1-num2) * (num2+num3) * (num3 %% num1):%d\n",(num1 - num2) * (num2 + num3) * (num3 % num1));

	return 0;
}
// %만 입력하면 호출로 인식되서 printf안에서 인식 안됨.printf안에선 %%로 입력할것.