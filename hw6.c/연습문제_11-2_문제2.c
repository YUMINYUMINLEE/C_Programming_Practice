#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[50];
	scanf(" %s", arr);
	int length=0;
	int tmp;
	while (1) {
		if (arr[length] != '\0')
			length++;
		else
			break;

	}
	length -= 1;
	for (int i = 0; i < length / 2; i++) {
		tmp = arr[i];
		arr[i] = arr[length - i];
		arr[length - i] = tmp;
	}
	for (int i = 0; i <= length; i++) {
		printf(" %c", arr[i]);
	}
}