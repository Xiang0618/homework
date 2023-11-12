#include<stdio.h>
#include<stdlib.h>

int main() {
	int a[5],num,temp;
	int x=0,y=0,z=0;
	printf("How many numbers do you want:");
	scanf("%d", &num);
	printf("Enter numbers:");
	for (int i = 0; i < num; i++)
	scanf("%d",&a[i]);

	printf("Original arrangement is ");
	for (int i = 0; i < num; i++)
		printf("%d ", a[i]);
	printf("\n");

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;				
			}	
			else x++;
			z++;
		}
		y = y + z;
		if (x == (num - i - 1)) break;
		x = 0;
	}

	printf("Arrange from small to large is ");
	for (int i = 0; i < num; i++)
		printf("%d ", a[i]);
	printf("\n");

	printf("Sorting times is %d\n", z);

	system("pause");
	return 0;
}