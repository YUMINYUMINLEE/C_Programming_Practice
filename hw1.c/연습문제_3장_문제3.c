#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;

	printf("���� �� ���� �ϳ��� �Է��Ͻÿ�.");
	scanf("%d", &num1);
	printf("�Է��� ������ %d �Դϴ�.\n", num1);

	int square_of_num1 = num1 * num1;

	printf("%d�� ����:%d\n", num1,square_of_num1);

	return 0;
}
//Ǯ��:*������ ���