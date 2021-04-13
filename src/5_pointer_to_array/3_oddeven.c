#include<stdio.h>
void main()
{
	int*ptr;
	int arr[100], n, i;
	ptr = arr;

	printf("\nInput the number of elements to be stored in the array=");
	scanf("%d", &n);

	printf("\nInput %d elements in the array=", n);
	for (i = 0; i < n; i++)
	{
		printf("\nEnter no. %d in array=", i);
		scanf("%d", &ptr[i]);
	}

	for (i = 0; i < n; i++)
	{
		if (ptr[i] % 2 == 0)
		{
			printf("\n%d is even", ptr[i]);
		}
		else
		{
			printf("\n%d is odd", ptr[i]);
		}
	}

	printf("\n\n");

}