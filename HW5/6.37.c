#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int maximum(int *array,int size);

int main() {
	srand(time(NULL));

	int num[] = { 0 };
	for (int i = 0; i < 10; i++)
		num[i] = rand() % 100;

		printf("array num is ");

	for (int i = 0; i < 10; i++)
		printf("%d ", num[i]);

	    printf("\n");

		printf("max number is ");
		printf("%d\n",maximum(num, 10));

	system("pause");
	return 0;
}
int  maximum(int *array	, int size) {
	if (size == 1)
		return array[0];

	int max = maximum(array, size - 1);
	return (max > array[size - 1])? max : array[size - 1];	
}
