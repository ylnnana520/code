#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 30
//定义学生结构体类型
typedef struct student
{
	long studentID;
	char name[20];
	int score[3];
}STUDENT;
void InputScore(STUDENT* stu, int n, int m);
void AverScore(STUDENT* stu, float* aver , int* sum1, int* sum2, int n, int m);
void PrintScore(STUDENT* stu, float* aver, int* sum1, int* sum2, int n, int m);
void Compare(STUDENT* stu, int* sum2, int m);
int main()
{
	float aver[N];
	STUDENT stu[N];
	int sum1[N];
	int sum2[N];
	int n;
	//输入学生人数
	scanf("%d", &n);

	InputScore(stu, n, 3);
	AverScore(stu, aver, sum1, sum2, n, 3);
	PrintScore(stu, aver, sum1, sum2, n, 3);
	Compare(stu, sum2, 3);

	return 0;
}
//输入学生成绩
void InputScore(STUDENT* stu, int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
				scanf("%ld %s", &stu[i].studentID, stu[i].name);
		for(j=0;j<m;j++)
		{
			scanf("%d", &stu[i].score[j]);
		}
	}
}
//计算学生每门课平均成绩和总成绩
void AverScore(STUDENT * stu, float* aver, int* sum1, int* sum2, int n, int m)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		sum1[i] = 0;
		for (j = 0; j < n; j++)
		{
			sum1[i] += stu[j].score[i];
		}
		aver[i] = (float)sum1[i] / n;
	}
	for (int k = 0; k < n; k++)
	{
		sum2[k] = 0;
		for (int l = 0; l < m; l++)
		{
			sum2[k] += stu[k].score[l];
		}
	}
 }
 //输出学生成绩
void PrintScore(STUDENT * stu, float* aver, int* sum1, int* sum2, int n, int m)
 {
	 int i, j;
	 for (i = 0; i < n; i++)
	 {
		 printf("%ld %s ", stu[i].studentID, stu[i].name);
		 for (j = 0; j < m; j++)
		 {
			 printf("%d ", stu[i].score[j]);
		 }
		 printf("\n");
	 }
	 for (int k = 0; k < m; k++)
	 {
		 printf("%d ", sum2[k]);
	 }
	 printf("\n");
	 for (int l = 0; l < m; l++)
	 {
		 printf("%.2f ", aver[l]);
	 }
	 printf("\n");
 }
//比较学生总成绩并输出该学生序号
void Compare(STUDENT* stu, int* sum2, int m)
{
	int i, j, temp;
	for (i = 0; i < m; i++)
	{
		for(j=i+1;j<m;j++)
		{
			if (sum2[i] < sum2[j])
			{
				temp = sum2[i];
				sum2[i] = sum2[j];
				sum2[j] = temp;
			}
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (sum2[i] == stu[j].score[0] + stu[j].score[1] + stu[j].score[2])
			{
				printf("%d ", j + 1);
				break;
			}
		}
	}
}