#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int total(int num);
int main(void)
{
	int num = 0;
	int tal = 0;
	scanf("%d", &num);
	tal = total(num);
	printf("%d", tal);

	return 0;
}
int total(int num)
{
	int tal = 0;
	for (int i = 1; i <= num; i++)
	{
		tal += i * i;
	}

	return tal;
}