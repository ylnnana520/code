#include<stdio.h>
#include<math.h>
int main( void ) {
    int a;
    scanf("%d", &a);

    if ((int)fabs(a) % (2) == 0)
    {
        printf("偶数\n");
        /* code */
    }
    else
    {
        printf("奇数\n");
    }
    

    return 0;
}