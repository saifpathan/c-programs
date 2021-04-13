#include<stdio.h>
void main()
{
	int arr[] = { 10, 20, 30, 40, 50 };			//blank array initialisation works
	int i;										//it reads its own size
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n\n");
}