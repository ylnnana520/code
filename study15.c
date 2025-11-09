#include <stdio.h>
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = gcd(a, b);
    printf("%d\n", c);
    printf("%d\n", (a * b) / c);

    return 0;
}