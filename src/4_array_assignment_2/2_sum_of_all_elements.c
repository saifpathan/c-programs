#include<stdio.h>
void main()
{
	int arr[100], n, i, sum = 0;

	printf("\nInput the number of elements to be stored in the array=");
	scanf("%d", &n);

	printf("\nInput %d elements in the array=", n);
	for (i = 0; i < n; i++)
	{
		printf("\nEnter no. %d in array=",i);
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	printf("\n\t\t\t\tSum of given nos. is=%d", sum);
	printf("\n\n");

}