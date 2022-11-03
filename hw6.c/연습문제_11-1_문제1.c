#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[5],max,min,sum=0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < 5; i++) {
		if(arr[i]>max){
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}
	printf("ÃÖ´ñ°ª: %d\n", max);
	printf("ÃÖ¼Ú°ª: %d\n", min);
	printf("ÃÑ ÇÕ: %d\n", sum);




}