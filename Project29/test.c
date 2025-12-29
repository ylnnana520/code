#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int reverse(int x);
int main() {
	int num = 0;
	scanf("%d", &num);
	int res = reverse(num);
	printf("%d\n", res);
	return 0;
}
//·­×ªÕûÊı
int reverse(int x) {
	int res = 0;
	while (x != 0) {
		res = res * 10 + x % 10;
		x /= 10;
	}
	return res;
}