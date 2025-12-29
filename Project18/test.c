#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int a, b, c, d, e;
	//输入一个三位数
	scanf("%d", &a);
	//分解出各个位数并输出
	b = a / 10;//去掉个位数
	d = b / 10;//取出百位数
	e = b % 10;//取出十位数
	c = a % 10;//取出个位数
	//比较各个位数并输出最大的三位数
	if (d >= e && d >= c) {
		if(b>=c)
			printf("%d%d%d\n", d, e, c);
		else
			printf("%d%d%d\n", d, c, e);
	}
	else if (e >= d && e >= c) {
		if (d >= c)
			printf("%d%d%d\n", e, d, c);
		else
			printf("%d%d%d\n", e, c, d);
	}
	else {
		if (d >= e)
			printf("%d%d%d\n", c, d, e);
		else
			printf("%d%d%d\n", c, e, d);
	}

	
	return 0;
}