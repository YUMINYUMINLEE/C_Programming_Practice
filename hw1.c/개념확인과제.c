#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3(void) {
	int num1;
	int num2;
	
	printf("AND, OR, XOR 연산할 두 정수를 입력하시오.");
	scanf("%d %d", &num1,&num2);
	printf("입력한 정수는 %d,%d 입니다.\n", num1,num2);

	int result_AND = num1 & num2;
	int result_OR = num1 | num2;
	int result_XOR = num1 ^ num2;

	printf("%d & %d = %d\n", num1, num2,result_AND);
	printf("%d | %d = %d\n", num1, num2,result_OR);
	printf("%d ^ %d = %d\n", num1, num2,result_XOR);

	return 0;
}
//풀이:비트연산자 사용