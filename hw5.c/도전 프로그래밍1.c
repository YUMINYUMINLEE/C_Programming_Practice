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
	printf("2�� n�¿��� n�� �Է��Ͻÿ�:");
	scanf("%d",&n);
	printf("2�� %d���� %d �̴�.",n,power(n));
	return 0;
}