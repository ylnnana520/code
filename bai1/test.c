#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int input(int num[], int *n);
void delete(int num[], int n, int newnum[], int *new_size, int m);
int main()
{
	int newnum[100] = {0};
	int num[100] = { 0 };
	int new_size = 0;
	int n = 0;
	int m = 0;

	// 输入数组
	n = input(num, &n);
	
	scanf("%d", &m);

	//删除指定位置的元素
	delete(num, n, newnum, &new_size, m);

	//打印新数组
	for (int i = 0; i < new_size; i++)
	{
		printf("%d ", newnum[i]);
	}
	printf("\n");
	return 0;
}
int input(int num[], int *n)
{
	scanf("%d", n);

	for (int i = 0; i < *n; i++)
	{
		scanf("%d", &num[i]);
	}
	return *n;
}
void delete(int num[], int n, int newnum[], int *new_size, int m)
{
	*new_size = 0;
	int delete_index = m - 1;

	//复制除了要删除元素之外的所有元素
	for (int i = 0; i < n; i++)
	{
		if (i != delete_index)
		{
			newnum[*new_size] = num[i];
			(*new_size)++;
		}
	}
}