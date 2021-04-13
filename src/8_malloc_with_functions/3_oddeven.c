#include<stdio.h>
#include<stdlib.h>
void oddeven(int*, int);
void main()
{
	int*ptr, size;
	printf("\n\nEnter size of array=");
	scanf("%d",&size);
	ptr = (int*)malloc(sizeof(int)*size);
	oddeven(ptr, size);
}
void oddeven(int*ptr, int size)
{
	int i;
	printf("\nEnter values of array=\n");
	for (i = 0; i < size; i++)
	{
		printf("Enter a value=");
		scanf("%d", &ptr[i]);
	}
	printf("\n\nOdd nd even numbers in array are=");
	for (i = 0; i < size; i++)
	{
		if (ptr[i] % 2 == 0)
		{
			printf("\n\t%d is even number", ptr[i]);
		}
		else
		{
			printf("\n\t%d is odd number", ptr[i]);
		}
	}
	printf("\n\n");
}
