#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char arr[] = { 'G','o','o','d',' ','t','i','m','e' };
	for (int i = 0; i < sizeof(arr); i++) {
		printf("%c", arr[i]);
	}
}