#include<stdio.h>
#include<stdlib.h>
void main()
{
	int*ptr;
	int i, n;
	printf("Enter size of array=");
	scanf("%d", &n);
	ptr = (int*)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		printf("\tEnter array values=");
		scanf("%d", &ptr[i]);
	}

	int j;
	int*ptr2;
	ptr2 = (int*)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		ptr2[i] = ptr[i];
	}
	for (j = 0; j < n; j++)
	{
		ptr[j] = ptr2[i - (j + 1)];
	}
	printf("\nReversed array is=");
	for (i = 0; i < n; i++)
	{
		printf("\t%d", ptr[i]);
	}
	printf("\n\n");
	free(ptr2);
}