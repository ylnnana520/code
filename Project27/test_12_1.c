#define _CRT_SECURE_NO_WARNINGS 1
#define PI 3.14
#include <stdio.h>
double area_of_circle(double r);//函数声明
int main() {
	double r;
	scanf("%lf", &r);//输入圆半径
	area_of_circle(r);
	printf("%.2f\n", area_of_circle(r));
	return 0;
}
//计算圆的面积
	double area_of_circle(double r) {
	double area = 0;
	area = PI * r * r;
	return area;
}