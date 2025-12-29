#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define A 20
#define B 10
int Input(int num[], int n1);
void Found(int num[], int arr[], int a, int b);
void pri(int arr[], int n2);
int main(void)
{
	int num[A];
	int arr[B];
	int n1 = A;
	int n2 = B;//定义变量
	Input(num, n1);
	Found(num, arr, n1, n2);
	pri(arr, n2);
	return 0;
}
//输入n个数
int Input(int num[], int n1)
{
	for (int i = 0; i < n1; i++)
	{
		scanf("%d", &num[i]);
	}
	return 0;
}
//统计出现的次数
void Found(int num[], int arr[], int n1,int n2)
{
	for (int i = 0; i < n2; i++)
	{
		int number = 0;
		for (int j = 0; j < n1; j++)
		{
			if (i == num[j])
			{
				number++;
			}
		}
		arr[i] = number;
	}
}
void pri(int arr[], int n2)
{
	for (int i = 0; i < n2; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
