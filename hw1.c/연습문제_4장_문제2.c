#include <stdio.h>

int main(void) {
	int num1 = 3;//00000000 00000000 00000000 00000011
	int result1 = num1 << 3;//0000000 00000000 00000000 00011000
	int result2 = result1 >> 2;//00000000 00000000 00000000 00000110

	printf("3*8/4=%d\n", result2);
	return 0;
}
//풀이:3*8/4 를 shift연산으로 곱셈과 나눗셈을 표현한다.