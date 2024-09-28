#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double amount, interest;
	int years;
	printf("Enter Principle amount, Rate of interest and number of years : ");
	scanf("%lf %lf %i", &amount, &interest, &years);
	printf("Simple Interest is : %lf", (amount * interest * years) / 100);
	return 0;
}