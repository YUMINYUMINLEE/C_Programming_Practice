#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;
	int num2;

	printf("나눗셈을 진행할 두 정수를 입력하시오.(이떄,처음에 입력한 정수를 다음에 입력한 정수로 나눈다.)");
	scanf("%d %d", &num1,&num2);
	printf("입력한 정수는 %d,%d 입니다.\n", num1,num2);

	int quot = num1 / num2;
	int rem = num1 % num2;
	printf("몫:%d\n", quot);
	printf("나머지;%d\n",rem);

	return 0;
}
//풀이:연산자 /와 %의 사용