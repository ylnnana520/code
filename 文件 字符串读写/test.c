#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	//写入字符串
	int ch;
	char str1[30], str2[30], str3[30];
	FILE* fp;
	fp = fopen("f2.txt", "w");
	if (fp == NULL)
	{
		printf("无法打开文件");
		return 1;
	}
	fgets(str1, sizeof(str1), stdin);
	fprintf(fp, "%s", str1);
	fgets(str2, sizeof(str2), stdin);
	fprintf(fp, "%s", str2);
	fgets(str3, sizeof(str3), stdin);
	fprintf(fp, "%s", str3);

	fclose(fp);

	//读出字符串
	fp = fopen("f2.txt", "r");
	if(fp==NULL)
	{
		printf("无法打开文件");
		return 1;
	}
	while ((ch = getc(fp)) != EOF)
	{
		putchar(ch);
	}
	fclose(fp);

	return 0;
}