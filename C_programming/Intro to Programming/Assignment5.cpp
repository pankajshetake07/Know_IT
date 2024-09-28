#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b;
	printf("\nEnter two numbers for swapping : ");
	scanf("%d %d", &a, &b);
	printf("\nBefore Swapping : %d  %d", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("\nAfter Swapping : %d  %d", a, b);
	printf("\n");
	return 0;
}