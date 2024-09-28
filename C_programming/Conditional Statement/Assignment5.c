#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char ch;
	printf("\n\n\n\tEnter any character : ");
	scanf("%c", &ch);
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
		printf("\n\n\tEnter character is alphabet");
	}
	else {
		printf("\n\n\tNot Alphabet");
	}
	printf("\n\n\n");
	return 0;
}