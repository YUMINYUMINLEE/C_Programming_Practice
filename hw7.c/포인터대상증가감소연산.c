#include <stdio.h>

void main4() {
	int arr[3] = { 11,22,33 };//�迭ũ�� 3�� �迭 �ʱ�ȭ.
	int* ptr = arr;//������ ���� ptr ���� �� �迭�����ּ� ����Ű�� ��� ������ arr ����Ű��.
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));//*(ptr+1)=arr[0+1]�� ����.
	printf("%d", *ptr); ptr++;//11 �� 1����
	printf("%d", *ptr); ptr++;//22 �� 1����
	printf("%d", *ptr); ptr--;//33 �� 1����
	printf("%d", *ptr); ptr--;//22�� 1����
	printf("%d", *ptr); printf("\n");//11
	return 0;
	//�� �����͸� �迭���� Ư�� �ε��� �ּҸ� ����Ű�� ����� �� �ִ�.
}