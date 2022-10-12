#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int power(int n) {
	if (n ==0)
		return 1;
	else {
		return power(n - 1) * 2;
	}
}

int main(void){
	int n;
	printf("2의 n승에서 n을 입력하시오:");
	scanf("%d",&n);
	printf("2의 %d승은 %d 이다.",n,power(n));
	return 0;
}