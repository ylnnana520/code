#include<stdio.h>
#include<string.h>
int main() {
    char dest[20] = "abc";
    char src[20] = "abc";
    int result = strcmp(dest, src);
    printf("%d\n", result);
    return 0;
}