#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define A 10
int input(int num[], int n);
int search(int num[], int n, int target);
int main()
{
	int num[A], n, target;
	n = A;
	input(num, n);
	scanf("%d", &target);
	int result = search(num, n, target);
	if (result != -1)
		printf("%d\n", result);
	else
		printf("No Found!\n");
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
int search(int num[], int n, int target)
{
	int i = 0;
	while (i < n)
	{
		if (num[i] == target)
		{
			return i + 1;
		}
		i++;
	}
	return -1;
}
