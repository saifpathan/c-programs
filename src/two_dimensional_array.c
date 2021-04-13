#include<stdio.h>
void main()
{
	int i, j;
	int arr[3][3];
	printf("\nEnter values of array=");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("\t%d",arr[i][j]);
		}
	}
	printf("\n\n");
}