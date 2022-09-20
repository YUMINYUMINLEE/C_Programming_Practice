#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int asc1;

	printf("아스키코드 문자로 출력할 정수를 입력하시오.");
	scanf(" %d", &asc1);
	printf("아스키코드 변환: %c", asc1);

	return 0;

}