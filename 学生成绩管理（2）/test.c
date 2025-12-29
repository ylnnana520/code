#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define N 30
typedef struct person
{
	char name[20];
	char sex[10];
	int age;
	float score;
};
void InputPerson(struct person* p, int n);
void PrintPerson(struct person* p, int n);

int main()
{
	struct person p[N];
	int n;
	scanf("%d", &n);
	InputPerson(p, n);
	PrintPerson(p, n);

	return 0;
}
//输入学生信息
void InputPerson(struct person* p, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf("%s %s %d %f", p[i].name, p[i].sex, &p[i].age, &p[i].score);
	}
}
//输出成绩最优秀的学生信息
void PrintPerson(struct person* p, int n)
{
	int i, maxIndex = 0;
	int m = 2;
	float maxScore = p[0].score;
	for (i = 1; i < n; i++)
	{
		if (p[i].score > maxScore)
		{
			maxScore=p[i].score;
			maxIndex = i;
		}
	}
	printf("成绩最优秀的是第%d个学生\n名字：%s 性别：%s 年龄：%d 成绩：%.*f", maxIndex + 1,
																			p[maxIndex].name,
																			p[maxIndex].sex,
																			p[maxIndex].age,
																			m,
																			p[maxIndex].score);
}