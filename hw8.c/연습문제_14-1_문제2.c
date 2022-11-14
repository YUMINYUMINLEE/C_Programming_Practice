#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
void Swap(int* ptr1, int* ptr2, int* ptr3){
	int temp;
	temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = temp;
}
void main1412(){
	int num1, num2, num3;
	printf("스왑할 정수 세개를 입력하시오. :");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("\n");
	Swap(&num1, &num2, &num3);
	printf("num1:%d num2:%d num3:%d", num1, num2, num3);
	
}