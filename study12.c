#include<stdio.h>
int main()
{
    int i;
    int count = 0;
    scanf("%d", &i);
    while (1<=i && i<=1000000000)
    {
        i /= 10;
        count++;
        if (i == 0) break;
    }
    printf("%d", count);
    return 0;
}