#include<stdio.h>
void main()
{
	int arr[100], n, i, x, y;

	printf("\nInput the number of elements to be stored in the array=");
	scanf("%d", &n);

	printf("\nInput %d elements in the array=", n);
	for (i = 0; i < n; i++)
	{
		printf("\nEnter no. %d in array=", i);
		scanf("%d", &arr[i]);
	}

	printf("\n\tPrime nos. in array are=");
	for (i = 0; i < n; i++)
	{
		x = 2;
		y = 1;
		while (x < arr[i])
		{
			if (arr[i] % x == 0)
			{
				y = 0;
				break;
			}
			x++;
		}
		if (y == 1)
		{
			printf("\t%d", arr[i]);
		}
	}

	printf("\n\n");

}