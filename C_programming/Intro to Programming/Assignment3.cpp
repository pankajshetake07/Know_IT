#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int no1, no2;
	printf("Enter two numbers : ");
	scanf("%d %d", &no1, &no2);
	printf("\nAddition is : %d", no1 + no2);
	printf("\nSubtraction is : %d", no1 - no2);
	printf("\nMultiplication is : %d", no1 * no2);
	printf("\nDivision is : %d", no1 / no2);
}