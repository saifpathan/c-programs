#include<stdio.h>
#include<stdlib.h>
void minmax(int*, int);
void main()
{
	int* ptr;
	int i, n;
	printf("Enter size of array=");
	scanf("%d", &n);
	ptr = (int*)malloc(sizeof(int)*n);
	for (i = 0; i < n; i++)
	{
		printf("Enter array elements=");
		scanf("%d", &ptr[i]);
	}
	minmax(ptr, n);
}
void minmax(int*ptr, int s)
{
	int i, max, min;
	max = ptr[0];
	min = ptr[0];
	for (i = 1; i < s; i++)
	{
		if (ptr[i]>max)
		{
			max = ptr[i];
		}
		if (ptr[i] < min)
		{
			min = ptr[i];
		}
	}
	printf("\nMaximum element is=%d", max);
	printf("\nMinimum element is=%d\n\n", min);
}