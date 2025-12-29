#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 10
//声明函数原型
int _1(int num[], int n);
int _2(int num[], int n, int a,int b);
int main()
{
	int a=0, b=0;
	int num[N] = { 0 };
	_2(num, N, a, b);//调用函数2
	for (int i = 0; i < N; i++)//打印处理后数组
	{
		printf("%d ", num[i]);
	}
	return 0;
}
//先从小到大
int _1(int num[], int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
	}
	for (int j = 0; j < n; j++)
	{
		for(int k = 0; k < n; k++)
		{
			if (num[j] < num[k])
			{
				int temp = num[j];
				num[j] = num[k];
				num[k] = temp;
			}
		}
	}
	return 0;
}
//指定位置从大到小
int _2(int num[], int n, int a, int b)
{
	_1(num, n);//调用函数1
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++)
	{
		for (int j = a; j <= b; j++)
		{
			if (num[i] > num[j])
			{
				int temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	
	return 0;
}