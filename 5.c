#include<stdio.h>
int main()
{
	double r;
	double pi=3.14159;
	
	scanf("%lf", &r);
	
	double circum = 2*pi*r;
	double area =pi*r*r;
	
	printf("%.2lf %.2lf\n", circum, area);
	
	return 0;
}