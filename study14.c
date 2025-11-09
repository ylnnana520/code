#include<stdio.h>
int main()
{
    int i = 2;
    int m = 0;
    int n = 0;
    while (m<1000)
    {
        i *= 2;
        m += i;
        n++;
    }
    printf("%d", n);
    return 0;
}