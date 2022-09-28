#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main711(void) {
	int num ;

	printf("양의정수를 입력하시오.");
	scanf("%d", &num);

    while (num > 0) {
		printf("Hello World\n");
		num--;
	}
	return 0;
}
//카운터 변수 사용할것! i=0(생각못했음) 카운터 변수는 i,j,k등으로 사용하고 기타 변수는 의미를 갖도록 사용하는것이 좋다.