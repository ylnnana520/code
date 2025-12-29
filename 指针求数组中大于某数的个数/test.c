#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//输入10个整数
	int a[10];
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int* p = a;
	
	//输入查找的整数
	int n;
	scanf("%d", &n);

	//输出数组中大于该整数值的个数
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (*(p + i) > n)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}