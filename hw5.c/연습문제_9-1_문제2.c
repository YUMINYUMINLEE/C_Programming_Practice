#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int choose;
	double cel, fah;

	printf("1.섭씨 2.화씨 : ");
	scanf("%d", &choose);

	if (choose == 1) {
		printf("섭씨 온도를 입력해 주십시오.");
		scanf(" %lf", &cel);
		printf("화씨 온도는 %.1f 입니다.", CelToFah(cel));
	}
	else if (choose == 2) {
		printf("화씨 온도를 입력해 주십시오.");
		scanf(" %lf", &fah);
		printf("섭씨 온도는 %.1f 입니다.", FahToCel(fah));
	}
}
double CelToFah(double cel) {
	return (cel * 1.8) + 32;
}

double FahToCel(double fah) {
	return (fah - 32) / 1.8;
}