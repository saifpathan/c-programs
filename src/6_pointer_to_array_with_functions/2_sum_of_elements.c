#include<stdio.h>
int summation(int*, int);
void main()
{
	
	int arr[100], n, i, x;

	printf("\nInput the number of elements to be stored in the array=");
	scanf("%d", &n);

	printf("\nInput %d elements in the array=", n);
	for (i = 0; i < n; i++)
	{
		printf("\nEnter no. %d in array=", i);
		scanf("%d", &arr[i]);
	}
	x = summation(arr, n);
	printf("\n\t\t\t\tSum of given nos. is=%d", x);
	printf("\n\n");
}
int summation(int*ptr, int n)
{
	int i;
	int sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + ptr[i];
	}
	return sum;
	printf("\n\n");

}