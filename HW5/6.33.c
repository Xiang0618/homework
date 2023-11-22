#include<stdio.h>
#include<stdlib.h>

int Search(int array[],int start,int end,int key);

int main() {
	int a[] = { 5,2,3,9,7,8,11,21,4,15 };

	printf("original arrangement:");
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	int i, j,temp;
	for (i = 0; i < 10 - 1; i++) {
		for (j = 0; j < 10 - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("bubble sort:");
	for (int i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");

	int keyToSearch;
	printf("¿é¤J·j¯ÁÁä:");
	scanf("%d",&keyToSearch);

	int result = Search(a, 0, 9, keyToSearch);

	if (result != -1)
		printf("·j´MÁä%d¦b°}¦Cªº¯Á¤Ş%d³Q§ä¨ì\n", keyToSearch, result);
	else
		printf("·j´MÁä%d¥¼¦b°}¦C¤¤§ä¨ì\n", keyToSearch);
	
	system("pause");
	return 0;
}

int Search(int array[],int start,int end,int key) {
	if (start <= end) {
		int mid = start + (end - start) / 2;

		if (array[mid] == key)
			return mid;

		if (array[mid] > key)
			return Search(array, start, mid - 1, key);

		else return Search(array, mid + 1, end, key);
	}
	else return -1;
}