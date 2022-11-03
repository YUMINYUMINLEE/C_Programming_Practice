#include <stdio.h>

void main() {
	int arr1[6] = { 1,2,3,4,5,6 };
	int arr2[6] = { 7,8,9,10,11,12 };

	int* ptr1 = arr1, * ptr2 = arr2;

	int tmp;

	for (int i = 0; i < 6; i++) {
		tmp = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 + i);
		*(ptr2 + i) = tmp;
	}
	printf("arr1: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("arr2: ");
	for (int i = 0; i < 6; i++) {
		printf("%d ", arr2[i]);
	}
	
}