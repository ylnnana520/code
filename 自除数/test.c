#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int num(int n);
int main()
{
	int number, n, a;
	scanf("%d", &n);
	num(n);
	if (num(n))
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}

	return 0;
}
//
int num(int n)
{
	int number = n;
	while (n > 0)
	{
		int digit = n % 10;
		if(digit==0 || number%digit!=0)
		{
			return 0;
		}
		n = n / 10;
	}
	return 1;
}