#include<stdio.h>
void reverse(int, int);
void main()
{
	int arr[5];
	reverse(arr, 5);
}
void reverse(int arr,int size)
{
	int*ptr;
	int temp[5];
	int i;
	ptr = arr;

	for (i = 0; i < size; i++)
	{
		printf("Enter the values of array=");
		scanf("%d", &ptr[i]);
	}
	for (i = 0; i <= 4; i++)
	{
		temp[i] = ptr[4 - i];
	}
	printf("\nReverse array=");
	for (i = 0; i < size; i++)
	{
		printf("\t%d", temp[i]);
	}
	printf("\n\n");
}
