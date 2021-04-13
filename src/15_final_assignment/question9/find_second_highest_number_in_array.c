#include<stdio.h>
void main()
{
	int a[50], n;
	int largest, s_largest, i;

	printf("\nEnter no. of elements you want in array=");
	scanf("%d", &n);
	printf("\nEnter elements=");
	for (i = 0; i < n; i++)
	{
		scanf("\n%d", &a[i]);
	}
	largest=s_largest = a[0];
	for (i = 1; i < n; i++)
	{
		if (largest <= a[i])
		{
			s_largest = largest;
			largest = a[i];
			
		}
		else if (s_largest < a[i] && a[i] != largest)
		{
			s_largest = a[i];
		}
	}
	printf("\nSecond highest number is=%d\n\n",s_largest);
}