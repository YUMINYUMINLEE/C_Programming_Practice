#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int numA;
	printf("부호를 반전할 정수를 입력하시오:");
	scanf("%d", &numA);
	printf("입력한 정수는 %d 입니다.\n", numA);
	
	int inverse_A = ~numA+1;
	printf("입력한 정수의 부호를 반전 시키면 %d 입니다.",inverse_A);
	return 0;
}
//풀이:~ 비트연산자로 비트를 반전시킨 후 1을 더해준다.


