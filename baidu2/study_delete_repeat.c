#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int newgive(int num[], int newnum[], int n, int mode);

int main() {
    int n;
    scanf("%d", &n);
	// 动态分配内存以存储n个整数
    int* num = (int*)malloc(n * sizeof(int));
    if (num == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
	}
    int j = 0;
	j = newgive(num, NULL, n, 0);//获取不重复元素个数
	// 为newnum分配内存
    int* newnum = (int*)malloc(j * sizeof(int));
    if (newnum == NULL) {
        printf("内存分配失败\n");
		free(num);
        return 1;
    }
	newgive(num, newnum, n, 1);//获取不重复元素

    // 这里可以继续你的逻辑，比如读取数组元素等

    for (int k = 0; k < j; k++)
    {
        printf("%d ", newnum[k]);
    }

	// 释放内存
    free(num);
	free(newnum);
    return 0;
}
int newgive(int num[], int newnum[], int n, int mode)
{
	int j = 0;
    for (int i = 0; i < n; i++)
    {
        if(i == n-1 || num[i] != num[i + 1])
        {
            if (mode == 1)
            {
                newnum[j] = num[i];
            }
            j++;
        }
    }
	return j;
}