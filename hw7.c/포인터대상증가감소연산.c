#include <stdio.h>

void main4() {
	int arr[3] = { 11,22,33 };//배열크기 3인 배열 초기화.
	int* ptr = arr;//포인터 변수 ptr 선언 및 배열시작주소 가르키는 상수 포인터 arr 가르키기.
	printf("%d %d %d\n", *ptr, *(ptr + 1), *(ptr + 2));//*(ptr+1)=arr[0+1]과 같다.
	printf("%d", *ptr); ptr++;//11 후 1증가
	printf("%d", *ptr); ptr++;//22 후 1증가
	printf("%d", *ptr); ptr--;//33 후 1감소
	printf("%d", *ptr); ptr--;//22후 1감소
	printf("%d", *ptr); printf("\n");//11
	return 0;
	//즉 포인터를 배열내의 특정 인덱스 주소를 가르키게 사용할 수 있다.
}