#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int no1, no2;
	int ch;
	do {
		printf("\n\n\n\tEnter two numbers : ");
		scanf("%d %d", &no1, &no2);
		printf("\n\t1. +");
		printf("\n\t2. -");
		printf("\n\t3. *");
		printf("\n\t4. /");
		printf("\n\t5. Mod");
		printf("\n\t6. Exit..");
		printf("Enter choice : ");
		scanf("%d", &ch);
		switch (ch) {
		case 1:
			printf("Addition = %d", no1 + no2);
			break;
		case 2:
			printf("Subtraction = %d", no1 - no2);
			break;
		case 3:
			printf("Multiplication = %d", no1 * no2);
			break;
		case 4:
			printf("Division = %d", no1 / no2);
			break;
		case 5:
			//printf("%d % %d = %d", no1, no2, no1 % no2);
			break;
		}
	} while (ch!=6);
}