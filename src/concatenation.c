#include<stdio.h>
void main()
{
	int arr[3] = { 10, 20, 30 };
	int brr[5] = { 40, 50, 60, 70, 80 };
	int crr[8];
	int i,j;

	for (i = 0; i < 3; i++)
	{
		crr[i] = arr[i];
	}
	for (j = 0; j < 5; j++)
	{
		crr[i] = brr[j];
		i++;
	}

	printf("\nArray after concatenation=");
	for (i = 0; i < 8; i++)
	{
		printf("\t%d", crr[i]);
	}
	printf("\n\n");

}