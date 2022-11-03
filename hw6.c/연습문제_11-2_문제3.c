#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[50];
	scanf(" %s", arr);
	int length = 0;
	int tmp;
	while (1) {
		if (arr[length] != '\0')
			length++;
		else
			break;

	}
	length -= 1;
	int max = (int)arr[0];

	for (int i = 0; i <= length; i++) {
		if ((int)arr[i] > max)
			max = (int)arr[i];
	}
	printf("%c", (char)max);

}