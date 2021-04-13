#include<stdio.h>
int minimum(int*, int);
int maximum(int*, int);
void main()
{
	int t;
	int x, y;
	
	int arr[5] = { 10, 20, 30, 40, 50 };
	t = 5;
	x=minimum(arr, t);
	y=maximum(arr, t);
	
	int i;
	printf("\nElements in array are=");
	for (i = 0; i < t; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\nMin element is=%d", x);
	printf("\nMax element is=%d", y);
	printf("\n\n");
}
int minimum(int*ptr, int t)
{
	int min, i;
	min = ptr[0];

	for (i = 0; i < t; i++)
	{
		if (ptr[i] < min)
		{
			min = ptr[i];
		}
	}
	return min;
}
int maximum(int*ptr,int t)
{
	int max, i;
	max = ptr[0];
	for (i = 0; i < t; i++)
	{
		if (ptr[i]> max)
		{
			max = ptr[i];
		}
	}
	return max;
	
	printf("\n\n");
}