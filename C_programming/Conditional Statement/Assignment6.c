#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double basicSalary;
	int totalSales;
	int commission;
	printf("\n\n\n\tEnter basic salary : ");
	scanf("%lf", &basicSalary);
	printf("\n\tEnter total sales : ");
	scanf("%d", &totalSales);
	if (totalSales >= 5000 && totalSales <= 7000) {
		commission = totalSales * 0.03;
	} else if (totalSales >= 7001 && totalSales <= 10000) {
		commission = totalSales * 0.05;
	} else if (totalSales >= 10001 && totalSales <= 15000) {
		commission = totalSales * 0.1;
	}
	else if (totalSales >= 15001) {
		commission = totalSales * 0.15;
	}
	printf("\n\n\tBasic Salary : %lf", basicSalary);
	printf("\n\n\tTotal Sales : %d", totalSales);
	printf("\n\n\tNet salary : %.2lf", basicSalary + commission);
	printf("\n\n\n");
	return 0;
}