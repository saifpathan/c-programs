#include<stdio.h>
void main()
{
	int arr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("Enter the values of array=");
		scanf("%d", &arr[i]);
	}
	printf("\nReverse array is=");
	for (i = 4; i >= 0; i--)
	{
		printf("\n%d", arr[i]);
	}
	printf("\n\n");
}