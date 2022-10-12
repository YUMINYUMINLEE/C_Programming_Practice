#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main911(void) {
	int num1, num2, num3;

	printf("세개의 정수 입력 : ");
	scanf("%d %d %d", &num1,&num2,&num3);
	printf("입력한 정수는 %d,%d,%d 입니다.\n", num1, num2,num3);

	printf("MAX = %d\n", getmax(num1,num2,num3));
	printf("MIN =%d\n" , getmin(num1,num2,num3));
	return 0;
}
int getmax(int num1, int num2, int num3) {
	if (num1 >= num2 && num1 >= num3) {
		return num1;
	}
	else if (num2 >= num1 && num2 >= num3) {
		return num2;
	}
	else if (num3 >= num1 && num3 >= num2)
		return num3;
	
	
}
int getmin(int num1, int num2, int num3) {
	if (num1 <= num2 && num1 <= num3)
		return num1;

	else if (num2<= num1 && num2 <= num3)
		return num2;

	else if (num3 <= num1 && num3 <= num2)
		return num3;
}