#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d", &a);

    if ((int)fabs(a) % (4) == 0)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}