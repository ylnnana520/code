#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	int n;
	int b;
	scanf("%d", &a);
	
	for (n=1; n <= a;n++) {
		// Print spaces
		for (int c = 1; c <= a - n; c++) {
			printf(" ");
		}
		// Print stars
		for (b=1; b<=2*n-1;b++)
		{
			printf("*");
		}
		// Reset b for next row
		printf("\n");
	}

	return 0;
}