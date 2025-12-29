#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // 为指针分配可修改的内存
    char* OldString = malloc(100 * sizeof(char));
    char* NewString = malloc(100 * sizeof(char));

    strcpy(OldString, "0");  // 初始化
    strcpy(NewString, "0");

    scanf("%99s", OldString);

    strcpy(NewString, OldString);  // 复制内容

    printf("OldString=%s\n", OldString);
    printf("NewString=%s\n", NewString);

    // 释放内存
    free(OldString);
    free(NewString);

    return 0;
}