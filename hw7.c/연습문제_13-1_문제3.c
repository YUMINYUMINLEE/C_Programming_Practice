#include <stdio.h>

void main133() {
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int total = 0;
	for (int i = 0; i < 5; i++) {
		total += *ptr;
		ptr--;
	}
	
		printf("%d ", total);
	}

