#include <stdio.h>
#include <string.h>
int main(void)
{
	char name1[20] = "0", name2[20] = "0";
	int age1, age2;
	printf("ù ��° ��� ���� �Է�: ");
	scanf_s("%s", name1, sizeof(name1));
	scanf_s("%d", &age1);
	printf("�� ��° ��� ���� �Է�: ");
	scanf_s("%s", name2, sizeof(name2));
	scanf_s("%d", &age2);
	if (!strcmp(name1, name2))
		printf("�̸��� �����մϴ�!");
	else
		printf("�̸��� �������� �ʽ��ϴ�!");
	if (age1 == age2)
		printf("���̰� �����ϴ�!");
	else
		printf("���̰� ���� �ʽ��ϴ�!");
	return 0;
}