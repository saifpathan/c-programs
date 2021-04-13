#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter size of array=");
	scanf("%d", &n);
	int arr[n] = { 10, 20, 30, 40, 50 };		//compile error=no constant value
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n\n");
}