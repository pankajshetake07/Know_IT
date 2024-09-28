#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE
#include<stdio.h>
int main() {
	int ch;
	int side, radious, length, width;
	do {
		printf("\n\n\t1.Square");
		printf("\n\n\t2.Rectangle");
		printf("\n\n\t3.Circle");
		printf("\n\n\t4.Exit..");
		printf("\n\n\tEnter your choice : ");
		(void)scanf("%d", &ch);
		switch (ch)
		{
		case 1:
			printf("\n\tEnter side : ");
			(void)scanf("%d", &side);
			printf("\n\tArea of Square is = %d", side * side);
			break;
		case 2:
			printf("\n\tEnter length and width : ");
			(void)scanf("%d %d", &length, &width);
			printf("\n\tArea of Rectangle : %d", length * width);
			break;
		case 3:
			printf("\n\tEnter radious : ");
			(void)scanf("%d", &radious);
			printf("\n\tArea of Circle : %lf", 3.14 * radious * radious);
			break;
		}
	} while (ch != 4);
	return 0;
}