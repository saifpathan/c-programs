#include<stdio.h>
void main()
{
	int arr[5], brr[5], crr[5], i;
	for (i = 0; i < 5; i++)
	{
		printf("Enter the values of array1=");
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 5; i++)
	{
		printf("Enter the values of array2=");
		scanf("%d", &brr[i]);
	}
	printf("\n\n");
	for (i = 0; i < 5; i++)
	{
		crr[i] = arr[i] + brr[i];
		
	}
	for (i = 0; i < 5; i++)
	{
		printf("\nSum of values of array1 and array2 is=%d", crr[i]);
	}
		printf("\n\n");
}