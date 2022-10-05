#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int kor, mat,eng;
	double grade;


	printf("국어,수학,영어 점수 입력:");
	scanf("%d%d%d", &kor,&mat,&eng);
	grade = (kor + mat + eng) / 3;

	if (grade >= 90)
	    printf("학점은 A 입니다.");
	else if (grade >= 80)
	    printf("학점은 B 입니다.");
	else if (grade >= 70)
	    printf("학점은 C 입니다.");
	else if (grade >= 50)
	    printf("학점은 D 입니다.");
	else
		printf("학점은 F 입니다.");


	return 0;
}