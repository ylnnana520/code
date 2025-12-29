#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
int main()
{
	int m = 0;
	int n = 0;
	int a = 0;
	int b = 0;
	char str[100];
	fgets(str, sizeof(str), stdin);//读取输入字符串
	
	//逐个判断字符
	for (int i = 0; str[i] != '\n'; i++)
	{
		if(isupper(str[i]))
		{
			m++;
		}
		else if(islower(str[i]))
		{
			n++;
		}
		else if(isdigit(str[i]))
		{
			a++;
		}
		else
		{
			b++;
		}
	}
	printf("大写:%d\n", m);
	printf("小写:%d\n", n);
	printf("数字:%d\n", a);
	printf("其他:%d\n", b);
	return 0;
}