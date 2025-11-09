#include <stdio.h>
#include <math.h>

// 判断n是否为素数
// 是素数返回1，否则返回0
int isPrime(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("是\n");
    } else {
        printf("不是\n");
    }

    return 0;
}