#include<stdio.h>
void main()
{
	int i;
	int arr[5] = { 10, 20 };
	char brr[5];
	brr[1] = 'A';
	brr[3] = 'B';
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n\n");

	for (i = 0; i < 5; i++)
	{
		printf("\t%c", brr[i]);
	}
	printf("\n\n");
}