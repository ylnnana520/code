#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main(){
	int i, j, k,count=0;
	// 10元 i 张，5元 j 张，1元 k 张
	for (i = 1; i <= 10; i++) {
		//计算10元张数
		for (j = 1; j <= 20; j++) {
			//计算5元张数
			k = 20 - i - j;
			//计算1元张数
			if (k>=1&&10*i+5*j+1*k==100){
				//总共100元
				count++;
				printf("10元 %2d张 5元 %2d张 1元 %2d张\n", i, j, k);
			}
		}
	}
	printf("%d\n", count);
	//输出总方案数
	return 0;
}