#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num1;
	int num2;
	int num3;

	printf("������ ������ �� ������ �Է��Ͻÿ�.");
	scanf("%d %d %d", &num1,&num2,&num3);
	printf("�Է��� ������ num1:%d,num2:%d,num3:%d�Դϴ�.\n", num1, num2,num3);
	printf("(num1-num2) * (num2+num3) * (num3 %% num1):%d\n",(num1 - num2) * (num2 + num3) * (num3 % num1));

	return 0;
}
// %�� �Է��ϸ� ȣ��� �νĵǼ� printf�ȿ��� �ν� �ȵ�.printf�ȿ��� %%�� �Է��Ұ�.