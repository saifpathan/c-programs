#include<stdio.h>
void main()
{
	int arr[5];
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("\nEnter the value=");
		scanf("%d", &arr[i]);

	}
	for (i = 0; i < 5; i++)
	{
		printf("\t%d",arr[i]);
		
	}
	printf("\n\n");

}