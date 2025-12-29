#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
long long factorial(int n) {
	int result = 1;
	if (n < 0) return -1;
	else if (n == 0) return 1;
	else {
		for (int i = 1; i <= n; i++) {
			result *= i;
		}
		return result;
	}
}
int main() {
	int a;
	scanf("%d", &a);
	int ret = factorial(a);
	printf("%d\n", ret);
	return 0;
}