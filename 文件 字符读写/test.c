#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char txt[100];
	FILE* fp;
	int ch;

	fp = fopen("f1.txt", "w");
	if (fp == NULL) // 检查文件是否成功打开
		{
		printf("无法打开文件 fl.txt\n");
		return 1;
	}

	fgets(txt, sizeof(txt), stdin); // 从标准输入读取一行文本

	fprintf(fp, "%s", txt); // 将文本写入文件

	fclose(fp);	




	fp = fopen("f1.txt", "r");

	if (fp == NULL) // 检查文件是否成功打开
	{
		printf("无法打开文件 f1.txt\n");
		return 1;
	}

	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);// 输出到屏幕
	}

	fclose(fp);
	return 0;
}