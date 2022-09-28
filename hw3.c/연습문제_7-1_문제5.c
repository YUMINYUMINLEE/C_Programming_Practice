#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, num2,i=0;
	double sum = 0.0;
	printf("몇개의 정수를 입력할까요");
	scanf( "%d", &num);

	while (i<num) {
		printf("정수입력");
		scanf( "%d",&num2);
		sum += num2;
		i++;
	}
	printf("평균은 %f 입니다.", sum / num);
	return 0;
}
//%d뒤에 빈칸 주의