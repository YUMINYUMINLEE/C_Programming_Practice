#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double km1;

	printf("mile ������ ��ȯ�� km������ �Ǽ��� �Է��Ͻÿ�.");
	scanf(" %lf", &km1);
	printf("%.1f km is equal to %.1f miles ", km1, km1/1.609);

	return 0;

}