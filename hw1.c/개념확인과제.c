#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main3(void) {
	int num1;
	int num2;
	
	printf("AND, OR, XOR ������ �� ������ �Է��Ͻÿ�.");
	scanf("%d %d", &num1,&num2);
	printf("�Է��� ������ %d,%d �Դϴ�.\n", num1,num2);

	int result_AND = num1 & num2;
	int result_OR = num1 | num2;
	int result_XOR = num1 ^ num2;

	printf("%d & %d = %d\n", num1, num2,result_AND);
	printf("%d | %d = %d\n", num1, num2,result_OR);
	printf("%d ^ %d = %d\n", num1, num2,result_XOR);

	return 0;
}
//Ǯ��:��Ʈ������ ���