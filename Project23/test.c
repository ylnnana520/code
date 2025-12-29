#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int i, j, k;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 3; j++) {
            if (i == j) {
				printf("(%d, %d)", i, j);
                continue;
            }
        
            for (k = 1; k <= 2; k++) {
                if (i + j + k == 5) {
                    printf("[%d, %d, %d]", i, j, k);
                    break;
                }
            }
		}
		printf("\n");
    }
    return 0;
}