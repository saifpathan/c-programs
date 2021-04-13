#include<stdio.h>
void main()
{
	int*ptr;
	int arr[5];
	int temp[5];
	int i;
	ptr = arr;

	for (i = 0; i < 5; i++)
	{
		printf("Enter the values of array=");
		scanf("%d", &ptr[i]);
	}
	for (i = 0; i <= 4; i++)
	{
		temp[i] = ptr[4 - i];
	}
	printf("\nReverse array=");
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", temp[i]);
	}
	printf("\n\n");
}
