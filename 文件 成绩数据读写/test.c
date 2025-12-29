#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 10
typedef struct student
{
	int score[3];
	float averstudent;
}Student;
void InputScore(struct student stu[], int n, int m);
void WriteScore(struct student stu[], int n, int m, FILE* fp);
int main()
{
	float averscore[3];
	struct student stu[N];
	FILE* fp;
	//输入学生成绩
	InputScore(stu, N, 3);
	//将学生成绩写入文件
	if ((fp = fopen("cj.dat", "w")) == NULL)
	{
		printf("Cannot open file!\n");
		return 1;
	}
	WriteScore(stu, N, 3, fp);
	
	fclose(fp);
	//计算各科平均分
	int i, j;
	for(i=0;i<3;i++)
	{
		float sum = 0.0;
		for(j=0;j<N;j++)
		{
			sum += stu[j].score[i];
		}
		averscore[i] = sum / N;
	}
	//输出各科平均分
	for (i=0;i<3;i++)
	{
		printf("%.2f ", averscore[i]);
	}
	printf("\n");
	
	//计算并输出平均分在90分以上的学生人数
	for(i=0;i<N;i++)
	{
		stu[i].averstudent = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
	}
	int count=0;
	for (i = 0; i < N; i++)
	{
		if(stu[i].averstudent>90)
			count++;
	}
	printf("%d", count);


	return 0;
}
void InputScore(struct student stu[], int n, int m)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d,", &stu[i].score[j]);
		}
	}
}
//将学生成绩写入文件
void WriteScore(struct student stu[], int n, int m, FILE* fp)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			fprintf(fp, "%d ", stu[i].score[j]);
		}
		fprintf(fp, "\n");
	}
}