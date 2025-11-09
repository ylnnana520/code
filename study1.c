#include<stdio.h>
#include<math.h>
int main() {
    int n;
    double x, y;
    x=16.4;
    y=frexp(x, &n);
    printf("x = %f can be represented as %f * 2^%d\n", x, y, n);
    return 0;
}