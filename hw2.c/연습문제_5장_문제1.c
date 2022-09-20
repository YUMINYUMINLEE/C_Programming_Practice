#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1(void) {
	int x1, y1, x2, y2;

	printf("좌상단의 좌표 입력");
	scanf(" %d %d", &x1,&y1);
	printf("우하단의 좌표 입력");
	scanf(" %d %d", &x2, &y2);
	int result = (x2 - x1) * (y2 - y1);
	if (x1 < x2 && y1 < y2) {
		printf("직사각형의 넓이:%d", result);
	}
	else {
		printf("우하단의 좌표는 좌상단의 좌표보다 항상 커야합니다. 재실행해 주십시오.");
	}
	return 0;

}