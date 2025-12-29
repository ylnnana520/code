#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define A 10
int input(int num[], int n);
void DataSort(int num[], int n);
int output(int num[], int n);
void Excellent(int num[], int n);
void Fail(int num[], int n);

int main() {
	int n = A;
	int num[A];
	input(num, n);
	DataSort(num, n);
	output(num, n);
	Excellent(num, n);
	printf(" ");
	Fail(num, n);
	return 0;
}
int input(int num[], int n)
{
	int i = 0;
	while (i < n)
	{
		scanf("%d", &num[i]);
		i++;
	}
	return 0;
}
void DataSort(int num[], int n)
{
	int i, j, temp, k;
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for(j = i + 1;j < n;j++)
			{
			if (num[j] > num[k])
			{
				k = j;
			}
		}
		if(k != i)
		{
			temp = num[i];
			num[i] = num[k];
			num[k] = temp;
		}

	}
}
int output(int num[], int n)
{
	int i, number = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ", num[i]);
		number++;
		if(number % 5 ==0)
			printf("\n");
	}
	return 0;
}
void Fail(int num[], int n)
{
	int number = 0;
	for (int i = 0; i < n; i++)
	{
		if (num[i] < 60)
		{
			number++;
		}
	}
	printf("%d", number);
}
void Excellent(int num[], int n)
{
	int number = 0;
	for (int i = 0; i < n; i++)
	{
		if (num[i] >= 90)
		{
			number++;
		}
	}
	printf("%d", number);
}

