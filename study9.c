#include<stdio.h>
int main()
{
    int a;
    double b;
    scanf("%d", &a);
    if (a<10)
    {
        printf("%.2lf\n", b=30.0);
        /* code */
    }
    else if (10<=a && a<50)
    {
        printf("%.2lf\n", b=30.0 + (a - 10) * 2.5);
    }
    else if (50<=a && a<=75)
    {
        printf("%.2lf\n", b=30.0 + 40 * 2.5 + (a - 50) * 2.0);
    }
    else if (a>75)
    {
        printf("%.2lf\n", b=180.0);
    }

    return 0;
}