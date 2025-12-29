#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 1000
int intput(int N, int M, int A[], int B[]);
int publish(int N, int M, int count, int A[], int B[], int C[], int D[]);
int main()
{
	int N, M;
	int A[MAX], B[MAX];
	int C[MAX], D[MAX];
	int count=0;
	scanf("%d %d", &N, &M);
	intput(N, M, A, B);
	count = publish(N, M, count, A, B, C, D);
	for (int i = 0; i < count; i++)
	{
		printf("%d ", D[i]);
	}
	return 0;
}
int intput(int N, int M, int A[], int B[])
{
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}
	for (int j = 0; j < M; j++)
	{
		scanf("%d", &B[j]);
	}
	return 0;
}
int publish(int N, int M, int count, int A[], int B[], int C[], int D[])
{
	int k = 0;
	//找出A和B数组中的公共元素，存入C数组
	for (int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
		{
			if (A[i] == B[j])
			{
				C[k] = A[i];
				k++;
			}
		}
	}
	//使C数组中每个元素唯一化，存入D数组
	for (int c = 0; c < k; c++)
	{
		int flag = 0;
		for (int d = 0; d < count; d++)
		{
			if (C[c] == D[d])
			{
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			D[count] = C[c];
			count++;
		}

	}
	//对D数组进行排序
	int temp = 0;
	for(int x = 0; x < count - 1; x++)
	{
		for(int y = x + 1; y < count; y++)
		{
			if (D[x] > D[y])
			{
				temp = D[x];
				D[x] = D[y];
				D[y] = temp;
			}
		}
	}
	
	return count;
}