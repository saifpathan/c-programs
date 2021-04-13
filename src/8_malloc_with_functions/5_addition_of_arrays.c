#include<stdio.h>
#include<stdlib.h>
void add(int*, int*, int*, int);
void main()
{
	int*arr, *brr, *crr, n;
	printf("Enter size for two arrays=");
	scanf("%d", &n);

	arr = (int*)malloc(sizeof(int)*n);
	brr = (int*)malloc(sizeof(int)*n);
	crr = (int*)malloc(sizeof(int)*n);

	add(arr, brr, crr, n);
}
void add(int*arr, int*brr, int*crr, int n)
{
	int i;
	printf("\nEnter values for 1st array=\n");
	for (i = 0; i < n; i++)
	{
		printf("\tEnter value=");
		scanf("%d", &arr[i]);
	}
	printf("\nEnter values for 2nd array=\n");
	for (i = 0; i < n; i++)
	{
		printf("\tEnter value=");
		scanf("%d", &brr[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		crr[i] = arr[i] + brr[i];
	}
	printf("\nAddition of two arrays is=\n");
	for (i = 0; i < n; i++)
	{
		printf("\t%d",crr[i]);
	}
	printf("\n\n");
}