#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int is = 1;
	fgets(str, sizeof(str), stdin);//输入字符串
	int len = strlen(str);
	if (len > 0 && str[len - 1] == '\n') {
		str[len - 1] = '\0';
		len--;  // 更新字符串长度
	}
	int start = 0;
	len = strlen(str);
	int end = len - 1;
	//定义首位和末位

	while (start<end)
	{
		if(str[start]!=str[end])
		{
			is = 0;
			break;
		}
		start++;
		end--;
	}
	if (is)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}

	return 0;
}