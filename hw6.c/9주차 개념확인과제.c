#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Odd numbers: ");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 1)
			printf("%d ", arr[i]);

	}

	printf("\nEven numbers: ");
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0)
			printf("%d ", arr[i]);

	}


	
	
}
