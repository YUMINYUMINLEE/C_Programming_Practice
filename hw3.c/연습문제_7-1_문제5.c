#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int num, num2,i=0;
	double sum = 0.0;
	printf("��� ������ �Է��ұ��");
	scanf( "%d", &num);

	while (i<num) {
		printf("�����Է�");
		scanf( "%d",&num2);
		sum += num2;
		i++;
	}
	printf("����� %f �Դϴ�.", sum / num);
	return 0;
}
//%d�ڿ� ��ĭ ����