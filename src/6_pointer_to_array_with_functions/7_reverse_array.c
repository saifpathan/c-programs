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
	int i;
	ptr = arr;
	for (i = 0; i < size; i++)
	{
		printf("Enter the values of array=");
		scanf("%d", &ptr[i]);
	}
	printf("\nReverse array is=");
	for (i = 4; i >= 0; i--)
	{
		printf("\n%d", ptr[i]);
	}
	printf("\n\n");
}