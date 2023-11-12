#include<stdio.h>
#include<stdlib.h>

void staticArray(void);
void automaticArray(void);

int main(void)
{
	printf("First call to each function:\n");
	staticArray();
	automaticArray();

	printf("\n\nSecond call to each function:\n");
	staticArray();
	automaticArray();
	printf("\n");

	system("pause");
	return 0;
}

void staticArray(void)
{
	static int array[3];
	int i;

	printf("\nValues on entering staticArray:\n");

	for (i = 0; i <= 2; i++)
		printf("array[%d]=%d  ", i, array[i]);

	printf("\nValue on exiting staticArray:\n");

	for (i = 0; i <= 2; i++)
		printf("array[%d]=%d  ", i, array[i]+=5);
}

void automaticArray(void)
{
	int array2[3] = {1,2,3};
	int i;

	printf("\n\nValues on entering automaticArray:\n");

	for (i = 0; i <= 2; i++)
		printf("array[%d]=%d  ", i, array2[i]);

	printf("\nValue on exiting automaticArray:\n");

	for (i = 0; i <= 2; i++)
		printf("array[%d]=%d  ", i, array2[i] += 5);
}