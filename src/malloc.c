#include<stdio.h>
#include<stdlib.h>
void main()
{
	int* ptr;
	int i;
	ptr = (int*)malloc(sizeof(int)* 5);
	printf("\nEnter values in array=");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &ptr[i]);
	}
	printf("\nEntered values in array are=");
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", ptr[i]);
	}
	printf("\n\n");
}