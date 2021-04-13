#include<stdio.h>
void main()
{
	int min,max;
	int arr[5] = { 10, 20, 30, 40, 50 };
	int i;
	printf("\nElements in array are=");
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n\n");

	max = arr[0];
	min = arr[0];

	for (i = 0; i < 5; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i]> max)
		{
			max = arr[i];
		}
	}
	printf("\nMax element is=%d", max);
	printf("\nMin element is=%d", min);
	printf("\n\n");
}