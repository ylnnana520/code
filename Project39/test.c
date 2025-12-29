#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
void mySum(int* p, int len, int* Odd, int* Even);
int main()
{
	int len = 0;
	int Odd=0,  Even=0;
	int* p=NULL;
	scanf("%d", &len);
	//为数组分配内存
	p = (int*)malloc(len * sizeof(int));
	if (p == NULL)
	{
		printf("分配内存失败\n");
		return 1;
	}
	mySum(p, len, &Odd, &Even);
	printf("%d %d\n", Odd, Even);

	free(p);//释放内存

	return 0;
}
void mySum(int* p, int len, int* Odd, int* Even)
{
	int i, j;
	*Odd = 0;
	*Even = 0;
	for (j=0; j<len; j++)
	{
		scanf("%d", &p[j]);
	}
	for (i = 0; i < len; i++)
	{
		if (p[i] % 2 == 0)
			*Even += p[i];
		else
			*Odd += p[i];
	}
}
