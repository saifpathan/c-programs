#include<stdio.h>
void arrayAddition(int, int, int, int);
void main()
{
	int arr[5], brr[5], crr[5];
	arrayAddition(arr, brr, crr, 5);
}
void arrayAddition(int arr[], int brr[], int crr[],int size)
{
	int i;
	int*ptr1;
	int*ptr2;
	int*ptr3;
	
	ptr1 = arr;
	ptr2 = brr;
	ptr3 = crr;
	for (i = 0; i < size; i++)
	{
		printf("Enter the values of array1=");
		scanf("%d", &ptr1[i]);
	}
	printf("\n\n");
	for (i = 0; i < size; i++)
	{
		printf("Enter the values of array2=");
		scanf("%d", &ptr2[i]);
	}
	printf("\n\n");
	for (i = 0; i < size; i++)
	{
		ptr3[i] = ptr1[i] + ptr2[i];

	}
	for (i = 0; i < size; i++)
	{
		printf("\nSum of values of array1 and array2 is=%d", ptr3[i]);
	}
	printf("\n\n");
}