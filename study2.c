#include<stdio.h>
#include<math.h>
int main()
{
    double x, y;
    x = 20.0;
    y = exp(x);
    printf("e^%.2f = %.2f\n", x, y);
    return 0;
}