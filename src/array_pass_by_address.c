#include<stdio.h>
void storevalues(int*, int);
void main()
{
	int arr[5] = { 0 };
	storevalues(arr, 5);
}
void storevalues(int*ptr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("\nEnter values of array=");
		scanf("\t%d", &ptr[i]);
	}
	printf("\nValues of array=");

	for (i = 0; i < size; i++)
	{
		printf("\t%d",ptr[i]);
		
	}
	printf("\n\n");
}