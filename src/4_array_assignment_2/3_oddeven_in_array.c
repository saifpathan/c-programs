#include<stdio.h>
void main()
{
	int arr[100], n, i;

	printf("\nInput the number of elements to be stored in the array=");
	scanf("%d", &n);

	printf("\nInput %d elements in the array=", n);
	for (i = 0; i < n; i++)
	{
		printf("\nEnter no. %d in array=", i);
		scanf("%d", &arr[i]);
	}
	
	for (i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			printf("\n%d is even", arr[i]);
		}
		else
		{
			printf("\n%d is odd", arr[i]);
		}
	}
	
	printf("\n\n");

}