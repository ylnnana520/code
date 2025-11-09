#include<stdio.h>
#include<math.h>
int main() {
    double x, y, result;
    scanf("%lf %lf", &x, &y);
    result = fmod(x, y);
    printf("fmod(%.2f, %.2f) = %.2f\n", x, y, result);
    return 0;
}