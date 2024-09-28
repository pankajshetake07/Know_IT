#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int no, rem, sum = 0;
	printf("Enter number which is upto 4 digits : ");
	scanf("%d", &no);
	while (no > 0) {
		rem = no % 10;
		sum = sum + rem;
		no = no / 10;
	}
	printf("Sum of digits is : %d", sum);
	return 0;
}