#include<stdio.h>
void main()
{
	int a[50];
	int i,n;
	int s = 0;
	printf("\nEnter no. of elements in array=");
	scanf("%d", &n);
	printf("\nEnter the elements=");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		if (a[i]>0)
		{
			a[s++] = a[i];
		}
	}
	while (s < n)
	{
		a[s++] = 0;
	}
	printf("\nArray after separation of zeros from non zeros=");
	for (i = 0; i < n; i++)
	{
		printf(" %d ", a[i]);
	}
	printf("\n\n");
}