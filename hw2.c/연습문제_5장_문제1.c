#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main1(void) {
	int x1, y1, x2, y2;

	printf("�»���� ��ǥ �Է�");
	scanf(" %d %d", &x1,&y1);
	printf("���ϴ��� ��ǥ �Է�");
	scanf(" %d %d", &x2, &y2);
	int result = (x2 - x1) * (y2 - y1);
	if (x1 < x2 && y1 < y2) {
		printf("���簢���� ����:%d", result);
	}
	else {
		printf("���ϴ��� ��ǥ�� �»���� ��ǥ���� �׻� Ŀ���մϴ�. ������� �ֽʽÿ�.");
	}
	return 0;

}