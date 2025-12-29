#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int black_hole(int num);
int main() {
	int num=0;
	scanf("%d", &num);
	if (num % 3 == 0) {
		if(black_hole(num) == 1)
		printf("Yes\n");
	}
	else printf("No\n");
	return 0;

}
//Êý×ÖºÚ¶´¼ÆËã
int black_hole(int num) {
	printf("%d\n", num);
	if (num == 153) { return 1; }
	int sum = 0;
	while (num != 0)
	{
		sum += pow(num % 10, 3);
		num /= 10;
	}
	
	return black_hole(sum);
}