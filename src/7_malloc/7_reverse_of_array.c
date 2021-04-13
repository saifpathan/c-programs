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
	printf("\nReversed array is=");
	for (i = n - 1; i >= 0; i--)
	{
		printf("\t%d", ptr[i]);

	}
	printf("\n\n");
}