#include<stdio.h>
void main()
{
	int n = 5;
	int arr[n] = { 10, 20, 30, 40, 50 };			//we cannot provide variable as array size
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n\n");
}