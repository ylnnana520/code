#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
double Average(int score[]);
void Min(int score[]);
int read(int score[]);
int main() {
	int score[10],min;
	double aver;
	read(score);
	aver = Average(score);
	printf("%.1lf\n", aver);
	Min(score);
	return 0;
}
double Average(int score[]) {
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += score[i];
	}
	return sum / 10.0;
}
// 平均值之差的绝对值为最小的数组元素
void Min(int score[]) {
	double area = Average(score);
	double min = score[0] - area;
	for (int i = 1; i < 10; i++) {
		if (fabs(min) > fabs(score[i] - area)) {
			min = fabs(score[i] - area);
		}
	}
	for (int i = 0; i < 10; i++) {
		if (min == fabs(score[i] - area)) {
			printf("%d ", score[i]);
		}
	}
}
int read(int score[]) {
	for (int i = 0; i < 10; i++) {
		scanf("%d", &score[i]);
	}
}