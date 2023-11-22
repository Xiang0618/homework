#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(NULL));

	int z;
	int a[13] = {0};
	
	for (int i = 1; i <= 36000; i++) {
		int x = rand() % 6 + 1;
		int y = rand() % 6 + 1;
		z = x + y;
		a[z]++;
	}

	for (int i = 2; i <=12; i++) 
		printf("%d出現的次數=%d\n",i, a[i]);
	
	system("pause");
	return 0;
}