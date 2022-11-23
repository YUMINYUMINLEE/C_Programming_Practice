#include <stdio.h>

int convertAlphabet(int ch) {
	const int diff = 'a' - 'A';
	if (ch >= 'A' && ch <= 'Z') {
		return ch + diff;
	}
	else if (ch >= 'a' && ch <= 'z') {
		return ch - diff;
	}
	else
		return -1;
	
}

int main(void) {
	int ch = getchar();
	if (convertAlphabet(ch) == EOF) { puts("������ ��� �Է��Դϴ�."); }
	else
		putchar(convertAlphabet(ch));

}