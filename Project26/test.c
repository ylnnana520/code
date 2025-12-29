#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void printprimes(int n) {
	int count = 1;
	int i;
	for (int j=2; j <= 100; j++) {
		if (j == 2) printf("2");
		else {
			for (i = 2; i < j; i++) {
				if (j % i == 0) {
					break;
				}
			}
			if (i == j) {
				printf(", %d", j);
				count++;
				if (count % 5 == 0) {
					printf("\n");
				}
			}
			
		}
	}
}
int main() {
	printprimes(100);
	return 0;
}

