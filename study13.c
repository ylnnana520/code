#include<stdio.h>
int main()
{
    int i=11;
    int n = 0;
    while (i<=2011)
    {
        n += i;
        i += 100;
    }
    printf("%d", n);
    return 0;
}