#include<stdio.h>
#include<stdlib.h>

void inverse(int *);
int main()
{
	int a[3] = { 3,5,7 };
	for (int i = 0; i < 3; i++)
		printf("%d  ", a[i]);
	printf("\n");

	inverse(a);

	for (int i = 0; i < 3; i++)
		printf("%d  ", a[i]);
	printf("\n");

	system("pause");
	return 0;	
}

void inverse(int *b) 
	{
		int temp[3], i;
		for (i = 0; i < 3; i++)
			temp[2 - i] = b[i];
		for (i = 0; i < 3; i++)
			b[i] = temp[i];
	}
		