#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
// 判断一个字符串是否是回文数
int palindrome(const char* str)
{
	int left = 0;
	int right = strlen(str) - 1;
	while (left < right)
	{
		if (str[left] != str[right])
			return 0;
		left++;
		right--;
	}
	return 1;
}
// 测试代码
int main()
{
	char str[100];
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = 0; // 去掉换行符
	if (palindrome(str))
		printf("是回文数\n");
	else
		printf("不是回文数\n");
	return 0;
}