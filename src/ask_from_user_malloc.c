#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n;
	int* ptr;
	int i;
	printf("How many int you want to store?=");
	scanf("%d", &n);

	ptr = (int*)malloc(sizeof(int)* n);
	printf("\nEnter values in array=");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &ptr[i]);
	}
	printf("\nEntered values in array are=");
	for (i = 0; i < n; i++)
	{
		printf("\t%d", ptr[i]);
	}
	printf("\n\n");
}