#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[20], str2[20], str3[40];
	printf("첫 번째 문자열 입력: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0; // \n 문자의 삭제
	printf("두 번째 문자열 입력: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0; // \n 문자의 삭제
	strcpy_s(str3, sizeof(str3), str1);
	strcat_s(str3, sizeof(str3), str2);
	//위 두 문장 대신, sprintf_s(str3, sizeof(str3), "%s%s", str1, str2); 도 사용 가능
	printf("조합의 결과: %s \n", str3);
	return 0;
}