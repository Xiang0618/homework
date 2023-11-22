#include<stdio.h>
#include<stdlib.h>

void string(char *array);
int main() {
	char str[] = { 0 };

	printf("Enter string:");
	scanf("%s", str);
	printf("original string is %s\n", str);

	printf("reversed string is ");
	string(str);
	printf("\n");

	system("pause");
	return 0;
}

void string(char *array) {
	if (*array == '\0') return;
	string(array + 1);
	
	printf("%c", *array);
}
