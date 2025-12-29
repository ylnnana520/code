#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <ctype.h>  // 包含tolower函数

int main() {
    char str[256];  // 定义字符数组，用于存储输入字符串
    char* p;       // 定义字符指针

    fgets(str, sizeof(str), stdin);  // 安全地读取输入

    p = str;  // 让指针指向字符串开头

    // 遍历字符串直到结束符
    while (*p != '\0') {
        // 如果是大写字母，转换为小写
        if (isupper(*p)) {
            *p = tolower(*p);
        }
        p++;  // 指针移动到下一个字符
    }

    printf("%s", str);

    return 0;
}
