#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;
	int num2;

	printf("�������� ������ �� ������ �Է��Ͻÿ�.(�̋�,ó���� �Է��� ������ ������ �Է��� ������ ������.)");
	scanf("%d %d", &num1,&num2);
	printf("�Է��� ������ %d,%d �Դϴ�.\n", num1,num2);

	int quot = num1 / num2;
	int rem = num1 % num2;
	printf("��:%d\n", quot);
	printf("������;%d\n",rem);

	return 0;
}
//Ǯ��:������ /�� %�� ���