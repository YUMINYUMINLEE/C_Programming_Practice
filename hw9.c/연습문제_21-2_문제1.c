#include <stdio.h>
int convToInt(char c)
{
	const int diff = 1 - '1';
	return c + diff;
}
int main(void)
{
	char str[50];
	int len, i, sum = 0;
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	for (i = 0; i < len; i++)
		if ('1' <= str[i] && str[i] <= '9')
			sum += convToInt(str[i]);
	printf("������ �� ��: %d \n", sum);
	return 0;
}