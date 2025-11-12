#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char ch;
	int a = 0, b = 0, c = 0;
	scanf("%c", &ch);

	while (ch != '\n')
	{
		if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
		{
			a++;
		}
		else if (ch >= '0' && ch <= '9')
			b++;
		else
			c++;
		ch = getchar();
	}
	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	return 0;

}