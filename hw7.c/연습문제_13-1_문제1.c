#include <stdio.h>

void main131() {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	for (int i = 0; i < 5; i++) {
		*ptr += 2;
		 ptr++;
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", arr[i]);
	}
	
}