#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double dou1, dou2;

	printf("��Ģ������ ������ �� �Ǽ��� �Է��Ͻÿ�.");
	scanf(" %lf %lf", &dou1, &dou2);
	printf("�� �Ǽ��� ��= %f ",dou1+dou2);
	printf("�� �Ǽ��� ��= %f ", dou1 - dou2);
	printf("�� �Ǽ��� ��= %f ", dou1 * dou2);
	printf("�� �Ǽ��� ������(��)= %f ", dou1 / dou2);
	printf("�� �Ǽ��� ������(��)= %f ", dou1-(dou2*(dou1/dou2)));

	return 0;

}