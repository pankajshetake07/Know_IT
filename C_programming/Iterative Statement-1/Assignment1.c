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
		printf("\n\tEnter choice : ");
		scanf("%d", &ch);
		switch (ch) {
		case 1:
			printf("\n\n\tAddition = %d", no1 + no2);
			break;
		case 2:
			printf("\n\n\tSubtraction = %d", no1 - no2);
			break;
		case 3:
			printf("\n\n\tMultiplication = %d", no1 * no2);
			break;
		case 4:
			printf("\n\n\tDivision = %d", no1 / no2);
			break;
		case 5:
			printf("\n\n\t%d = ", no1 % no2);
			break;
		case 6:
			break;
		}
	} while (ch != 6);
}