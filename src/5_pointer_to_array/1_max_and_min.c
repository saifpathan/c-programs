#include<stdio.h>
void main()
{
	int min, max;
	int *ptr;
	int arr[5] = { 10, 20, 30, 40, 50 };
	ptr = arr;
	int i;
	printf("\nElements in array are=");
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", ptr[i]);
	}
	printf("\n\n");

	max = ptr[0];
	min = ptr[0];

	for (i = 0; i < 5; i++)
	{
		if (ptr[i] < min)
		{
			min = ptr[i];
		}
		if (ptr[i]> max)
		{
			max = ptr[i];
		}
	}
	printf("\nMax element is=%d", max);
	printf("\nMin element is=%d", min);
	printf("\n\n");
}