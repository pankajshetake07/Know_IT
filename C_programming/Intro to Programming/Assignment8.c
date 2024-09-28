#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		printf("Enter %d subject mark : ", i+1);
		scanf("%d", &arr[i]);
		sum = sum + arr[i];
	}
	printf("\nTotal Marks = %d", sum);
	printf("\nAverage is = %d", sum / 5);
	return 0;
}