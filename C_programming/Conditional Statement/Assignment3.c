#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int no1, no2;
	printf("\n\n\n\tEnter two numbers : ");
	scanf("%d %d", &no1, &no2);
	if (no1 > no2) {
		printf("\n\n\tnumber 1 is greater");
	}
	else {
		printf("\n\n\tnumber 2 is greater");
	}
	printf("\n\n\n");
	return 0;
}