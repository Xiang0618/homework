#include<stdio.h>
#include<stdlib.h>
#define STUDENT 3
#define EXAMS 4

int minimum(const int grades[][EXAMS], int pupils, int tests);
int maximum(const int grades[][EXAMS], int pupils, int tests);
double average(const int setofgrades[], int tests);
void printArray(const int grades[][EXAMS], int puplis, int tests);

int main()
{
	int student;
	const int studentgrades[STUDENT][EXAMS] =
	{ {77,68,86,73},
	  {96,87,89,78},
	  {70,90,86,81} };
	printf("The array is:\n");
	printArray(studentgrades, STUDENT, EXAMS);

	printf("\n\nLowest grade:  %d\nHighest grade: %d\n",
		minimum(studentgrades, STUDENT, EXAMS),
		maximum(studentgrades, STUDENT, EXAMS));
	for(student=0;student<STUDENT;student++)
	{
		printf("The average grade for student %d is %.2f\n",
			student, average(studentgrades[student], EXAMS));
	}
	system("pause");
	return 0;
}

void printArray(const int grades[][EXAMS], int puplis, int tests)
{
	int i, j;
	printf("                [0]  [1]  [2]  [3]");

	for(i=0;i<puplis;i++)
	{
		printf("\nstudentgrades[%d]", i);
		for (j = 0; j < tests; j++)
			printf("%-5d", grades[i][j]);
	}
}

int minimum(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j;
	int lowgrade = 100;

	for(i=0;i<pupils;i++)
	{
		for(j=0;j<tests;j++)
		{
			if (grades[i][j] < lowgrade)
				lowgrade = grades[i][j];
		}
	}
	return lowgrade;
}

int maximum(const int grades[][EXAMS], int pupils, int tests)
{
	int i, j;
	int highgrade = 0;

	for (i = 0; i < pupils; i++)
	{
		for (j = 0; j < tests; j++)
		{
			if (grades[i][j] > highgrade)
				highgrade = grades[i][j];
		}
	}
	return highgrade;
}

double average(const int setofgrades[], int tests)
{
	int i,total = 0;

	for(i=0;i<tests;i++)
	{
		total += setofgrades[i];
	}
	return (double)total / tests;
}
