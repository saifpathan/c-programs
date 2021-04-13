#include<stdio.h>
void sum(int, int);
void main()
{
	int arr[10];
	sum(arr, 10);
}
void sum(int arr,int size)
{
	int*ptr;
	int i, sum = 0;
	ptr = arr;
	for (i = 0; i < size; i++)
	{
		printf("\nEnter 10 nos. in array=");
		scanf("%d", &ptr[i]);
	}
	for (i = 0; i < size; i++)
	{
		sum = sum + ptr[i];
	}
	printf("\n\t\t\t\tSum of given 10 nos. is=%d", sum);
	printf("\n\n");

}