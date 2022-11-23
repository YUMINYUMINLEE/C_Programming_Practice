#include <stdio.h>
#include <ctype.h> 
#include <string.h>

void change(char str[]);

int main(void)

{
    char string[20];
    printf("문자열 입력:");
    scanf("%s", string);
    printf("문자열 변환:");
    change(string);
    printf("바뀐 문자열:%s\n", string);
    return 0;

}



void change(char str[])

{
    int i;
    int length = strlen(str);
    for (i = 0; i < length; i++)
    {
        if (str[i] >= 65 && str[i] <= 90) //대문자일 경우
            str[i] = tolower(str[i]);
        else if (str[i] >= 97 && str[i] <= 122) //소문자일 경우
            str[i] = toupper(str[i]);

    }

}

