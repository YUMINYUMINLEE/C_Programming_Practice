#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int numA;
	printf("��ȣ�� ������ ������ �Է��Ͻÿ�:");
	scanf("%d", &numA);
	printf("�Է��� ������ %d �Դϴ�.\n", numA);
	
	int inverse_A = ~numA+1;
	printf("�Է��� ������ ��ȣ�� ���� ��Ű�� %d �Դϴ�.",inverse_A);
	return 0;
}
//Ǯ��:~ ��Ʈ�����ڷ� ��Ʈ�� ������Ų �� 1�� �����ش�.


