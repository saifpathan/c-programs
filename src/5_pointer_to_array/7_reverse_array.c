#include<stdio.h>
void main()
{
	int*ptr;
	int arr[5];
	int i;
	ptr = arr;
	for (i = 0; i < 5; i++)
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