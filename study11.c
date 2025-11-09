#include<stdio.h>
int main()
{
    int count = 0;
    int i;
    for (i = 1; i <= 200; i++)
    {
        if (i%3==0 && i%5==0)
        {
            printf("%d ", i);
            count++;
            if (count == 10)
            {
                printf("\n");
            }
        }
    }
    return 0;
}