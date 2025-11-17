#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	double capital, rate, deposit, rat = 1;
	int n;
	scanf("%lf,%d,%lf", &rate, &n, &capital);
	for (int i = 1; i <= n; i++) {
		rat *= (1 + rate);
	}
	deposit = capital * rat;
	printf("deposit = %.2lf\n", deposit);

	return 0;
}