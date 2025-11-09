#include<stdio.h>
int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	int d = (a - (a % 3)) / 3;
	int e = ((d + b) - (d + b) % 3) / 3;
	int f = ((d + c + e) - (d + c + e) % 3) / 3;
	int g = d + e + f;
	int h= e + f;
	int i= f;
	
	printf("%d %d %d\n", g, h, i);
	
	return 0;
}