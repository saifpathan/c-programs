#include<stdio.h>
#include<stdlib.h>
void main()
{
	int*ptr;
	int n;
	printf("Enter size of array=");
	scanf("%d", &n);
	ptr = (int)malloc(sizeof(int)*n);
	
	int i, j, p;
	printf("\nEnter values of array=\n");
	for (i = 0; i < n; i++)
	{
		printf("\tEnter a value=");
		scanf("%d", &ptr[i]);
	}
	printf("\nPrime nos. are=");
	for (i = 0; i < n; i++)
	{
		j = 2;
		p = 1;
		while (j < ptr[i])
		{
			if (ptr[i] % j == 0)
			{
				p = 0;
				break;
			}
			j++;
		}
		if (p == 1)
		{
			printf("\t%d", ptr[i]);
		}
	}
	printf("\n\n");
}