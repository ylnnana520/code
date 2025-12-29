#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define PI 3.14
double areaandcircumference(double radius, double* circumference);
int main()
{
	double radius = 0.0;
	scanf("%lf", &radius);
	double circumference = 0.0;
	double area = areaandcircumference(radius, &circumference);
	printf("周长:%.2lf\n面积:%.2lf\n", circumference, area);
	return 0;
}
double areaandcircumference(double radius, double* circumference)
{
	*circumference = 2 * PI * radius;
	return PI * radius * radius;
}
