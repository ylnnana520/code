#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int n;
	double a = 2, b = 1, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		sum += a / b;
		a += b;
		b = a - b;
	}

	printf("%.10lf", sum);

	return 0;
}