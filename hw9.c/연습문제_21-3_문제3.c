#include <stdio.h>
#include <string.h>
int main(void)
{
	char name1[20] = "0", name2[20] = "0";
	int age1, age2;
	printf("첫 번째 사람 정보 입력: ");
	scanf_s("%s", name1, sizeof(name1));
	scanf_s("%d", &age1);
	printf("두 번째 사람 정보 입력: ");
	scanf_s("%s", name2, sizeof(name2));
	scanf_s("%d", &age2);
	if (!strcmp(name1, name2))
		printf("이름이 동일합니다!");
	else
		printf("이름이 동일하지 않습니다!");
	if (age1 == age2)
		printf("나이가 같습니다!");
	else
		printf("나이가 같지 않습니다!");
	return 0;
}