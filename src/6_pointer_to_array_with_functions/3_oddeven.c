#include<stdio.h>
void oddeven(int*, int);
void main()
{
	int arr[5];

	oddeven(arr, 5);

	
}
void oddeven(int*ptr,int t)
{
	int i;

	printf("\nInput %d elements in the array=",t);
	for (i = 0; i < t; i++)
	{
		printf("\nEnter no. %d in array=", i);
		scanf("%d", &ptr[i]);
	}

	for (i = 0; i < t; i++)
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