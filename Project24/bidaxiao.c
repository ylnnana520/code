#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define EPS 1e-7
#include <math.h>
void bdx() {
	double a, b;
	if(fabs(a - b) < EPS) {
		printf("a=b\n");
	} else {
		printf("a!=b\n");
	}
}