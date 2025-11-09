#include<stdio.h>
#include<math.h>
int main()
{
	double a;
	double b;
	
	scanf("%lf %lf", &a, &b);
	
	double x = a*a+b*b;
	double c = sqrt(x);
	
	printf("%.2lf\n", c);
	return 0;
}