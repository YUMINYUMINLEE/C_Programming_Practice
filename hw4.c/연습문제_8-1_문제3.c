#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int kor, mat,eng;
	double grade;


	printf("����,����,���� ���� �Է�:");
	scanf("%d%d%d", &kor,&mat,&eng);
	grade = (kor + mat + eng) / 3;

	if (grade >= 90)
	    printf("������ A �Դϴ�.");
	else if (grade >= 80)
	    printf("������ B �Դϴ�.");
	else if (grade >= 70)
	    printf("������ C �Դϴ�.");
	else if (grade >= 50)
	    printf("������ D �Դϴ�.");
	else
		printf("������ F �Դϴ�.");


	return 0;
}