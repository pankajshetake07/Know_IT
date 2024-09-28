#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b;
	printf("Enter two numbers : ");
	scanf("%d %d", &a, &b);
	printf("\nBefore Swapping : %d and %d ", a, b);
	int temp = a;
	a = b;
	b = temp;
	printf("\nAfter Swapping : %d and %d", a, b);
}