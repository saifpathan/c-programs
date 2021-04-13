#include<stdio.h>
#include<stdlib.h>
void main()
{
	int ans=0, n;
	int* ptr;
	printf("Enter size of array=");
	scanf("%d", &n);
	ptr = (int*)malloc(sizeof(int)*n);
	
	int i;
	for (i = 0; i < n; i++)
	{
		printf("Enter element in array=");
		scanf("%d", &ptr[i]);
	}
	for (i = 0; i < n; i++)
	{
		ans = ans + ptr[i];
	}
	printf("\nAddition of elements in array is=%d\n\n", ans);
	printf("\n\n");
}