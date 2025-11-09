#include<stdio.h>
int main()
{
    int i=1;
    int n=99;
    while (i<=100)
    {
        printf("%d ", i);
        i++;
    }
    while (n<100 && n>=1)
    {
        printf("%d ", n);
        n--;
    }
    return 0;
}