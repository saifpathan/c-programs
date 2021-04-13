#include<stdio.h>
void main()
{
	int arr[10], i, sum = 0;
	for (i = 0; i < 10; i++)
	{
		printf("\nEnter 10 nos. in array=");
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < 10; i++)
	{
		sum = sum + arr[i];
	}
	printf("\n\t\t\t\tSum of given 10 nos. is=%d", sum);
	printf("\n\n");

}