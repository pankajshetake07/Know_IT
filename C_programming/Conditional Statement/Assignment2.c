#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int no;
	printf("\n\n\n\tEnter any number : ");
	scanf("%d", &no);
	if (no % 2 == 0) {
		printf("\n\n\tnumber is even.");
	}
	else {
		printf("\n\n\tnumber is odd.");
	}
	printf("\n\n\n");
	return 0;
}