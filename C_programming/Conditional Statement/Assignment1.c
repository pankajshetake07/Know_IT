#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int no;
	printf("Enter any number : ");
	scanf("%d", &no);
	if (no == 0) {
		printf("\nnumber is zero..");
	}
	else if(no < 0) {
		printf("\nnumber is negative..");
	}
	else {
		printf("number is positive");
	}
	return 0;
}