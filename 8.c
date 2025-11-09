#include<stdio.h>

int main()
{
	double r, h, pi = 3.14159;
	
	scanf("%lf %lf", &r, &h);
	
	double volume = pi * r * r * h;
	
	printf("%.2lf", volume);
	
	return 0;
}