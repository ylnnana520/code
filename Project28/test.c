#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int isprime(int n);
int main() {
	int n = 0;
	scanf("%d", &n);
	if (isprime(n)==0) {
		printf("0\n");
	}
	else {
		printf("1\n");
	}
}
//ÅÐ¶ÏËØÊýµÄº¯Êý
int isprime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}