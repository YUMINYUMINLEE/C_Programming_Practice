#include <stdio.h>
#include <ctype.h> 
#include <string.h>

void change(char str[]);

int main(void)

{
    char string[20];
    printf("���ڿ� �Է�:");
    scanf("%s", string);
    printf("���ڿ� ��ȯ:");
    change(string);
    printf("�ٲ� ���ڿ�:%s\n", string);
    return 0;

}



void change(char str[])

{
    int i;
    int length = strlen(str);
    for (i = 0; i < length; i++)
    {
        if (str[i] >= 65 && str[i] <= 90) //�빮���� ���
            str[i] = tolower(str[i]);
        else if (str[i] >= 97 && str[i] <= 122) //�ҹ����� ���
            str[i] = toupper(str[i]);

    }

}

