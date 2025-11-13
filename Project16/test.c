#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a;
	int b;
	scanf("%d", &a);
	int n;
	n = a % 10;
	while (n == 0)
	{
		a /= 10;
		n = a % 10;
	}
	do
	{
		b = a % 10;
		a /= 10;
		printf("%d", b);
	} while (a> 0);
	return 0;
}