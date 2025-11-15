#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	double money,km;
	scanf("%lf", &km);

		if (km > 0 && km <= 3) {
			money = 10;
			printf("%.2lf\n", money);
	}
		else if (km > 3 && km <= 5) {
			money = 10 + (km - 3) * 1.8;
			printf("%.2lf\n", money);
		}
		else {
			money = 10 + (5 - 3) * 1.8 + (km - 5) * 2.7;
			printf("%.2lf\n", money);
		}
	return 0;
}