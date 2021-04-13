#include<stdio.h>
void main()
{
	int arr[5] = { 10, 20, 30 };    //values less than array size
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n\n");
}