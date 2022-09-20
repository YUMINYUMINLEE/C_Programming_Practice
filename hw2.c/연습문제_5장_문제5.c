#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char asc1;

	printf("정수로 출력할 문자를 입력하시오.");
	scanf(" %c", &asc1);
	printf("아스키코드를 정수로 변환: %d", asc1);

	return 0;

}