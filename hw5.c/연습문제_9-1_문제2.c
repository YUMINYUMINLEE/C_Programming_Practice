#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int choose;
	double cel, fah;

	printf("1.���� 2.ȭ�� : ");
	scanf("%d", &choose);

	if (choose == 1) {
		printf("���� �µ��� �Է��� �ֽʽÿ�.");
		scanf(" %lf", &cel);
		printf("ȭ�� �µ��� %.1f �Դϴ�.", CelToFah(cel));
	}
	else if (choose == 2) {
		printf("ȭ�� �µ��� �Է��� �ֽʽÿ�.");
		scanf(" %lf", &fah);
		printf("���� �µ��� %.1f �Դϴ�.", FahToCel(fah));
	}
}
double CelToFah(double cel) {
	return (cel * 1.8) + 32;
}

double FahToCel(double fah) {
	return (fah - 32) / 1.8;
}