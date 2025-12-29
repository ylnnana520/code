#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int fun(int s[], int* x);
int input(int s[]);
int main()
{
	int s[10];
	int fail=0;
	int* x = &fail;
	int y;
	input(s);
	for (int i = 0; i < 10; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if(s[i] < s[j])
			{
				int temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
	for(int k=0; k < 10; k++)
	{
		printf("%d ", s[k]);
	}
	printf("\n");
	y = fun(s, x);
	printf("%d %d", y, fail);
	return 0;
}
int input(int s[])
{
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &s[i]);
	}
	return 0;
}
int fun(int s[], int* x)
{
	int y = 0;
	for (int i = 0; i < 10; i++)
	{
		if (s[i] >= 90)
		{
			y++;
		}
		else if(s[i]<60)
		{
			(*x)++;
		}
	}
	return y;
}