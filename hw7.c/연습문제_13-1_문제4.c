#include <stdio.h>

void main134(){
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = arr;
	int* ptr2 = &arr[5];
	int tmp;
	for (int i = 0; i < sizeof(arr)/8; i++) {
		tmp = *(ptr1 + i);
		*(ptr1 + i) = *(ptr2 - i);
		*(ptr2 - i) = tmp;
	}
	for (int i = 0; i < 6; i++) {
		printf("%d", arr[i]);
	}
	
}

