#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int a=1, b=0, c=0, d=0;
	int ret=scanf("%d %d %d %d", &a, &b, &c, &d);
	printf("%d %d %d %d\n", a, b, c, d);
	printf("ret=%d\n", ret);
	
	return 0;
}