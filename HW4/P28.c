#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

void Array(int b[], int size);
void Element(int e);

int main()
{
	int a[SIZE] = { 0,1,2,3,4 };
	int i;

	printf("Effects of passing entire array by reference:\n\nThe"
		"values of the origin array are:\n");

	for (i = 0; i < SIZE; i++)
		printf("%3d", a[i]);
	printf("\n");

	Array(a, SIZE);
	printf("The values of the modified array are:\n");
	for (i = 0; i < SIZE; i++)
		printf("%3d", a[i]);
	printf("\n\nEffects of passing array element"
		"by value:\n\nThe value of a[3] is %d\n", a[3]);

	Element(a[3]);
	printf("The value of a[3] is %d\n", a[3]);

	system("pause");
	return 0;
}

void Array(int b[], int size)
{
	int j;

	for (j = 0; j < size; j++)
		b[j] *= 2;
}
void Element(int e)
{
	printf("value in modifyElement is %d\n", e *= 2);
}