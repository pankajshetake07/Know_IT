#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int no1, no2, no3;
	printf("\n\n\n\tEnter three numbers : ");
	scanf("%d %d %d", &no1, &no2, &no3);

	/*if (no1 < no2 && no1 < no3) {
		printf("\n\n\tnumber 1 is smaller");
	}
	else if (no2 < no3) {
		printf("\n\n\tnumber 2 is smaller.");
	}
	else {
		printf("\n\n\tnumber 3 is smaller");
	}
	printf("\n\n\n");*/

	int smaller = no1 < no2 ? (no1 < no3 ? no1 : no3) : no2 < no3 ? no2 : no3;
	printf("\n\n\t%d is smaller ", smaller);
	printf("\n\n\n");
	return 0;
}