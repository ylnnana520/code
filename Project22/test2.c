#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	printf("请输入两个整数；");
	scanf("%d %d", &num1, &num2);
	int a = 0;
	a = sum(num1, num2);
	printf("%d\n", a);
	return 0;
}