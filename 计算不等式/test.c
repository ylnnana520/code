#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	double sum1 = 0.0;
	double sum2 = 0.0;
	int a = 0, b = 0;
	int n = 0;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= 150000; i++)
	{
		n = i;
		sum1 = 1 / n;
		sum2 = 1 / sum1;
		if (sum2 >= a)
		{
			printf("%d ", n);
		}
		if (sum2 < b)
		{
			printf("%d\n", n - 1);)
		}
	}
	return 0;
 }