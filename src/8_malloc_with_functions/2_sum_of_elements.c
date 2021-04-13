#include<stdio.h>
#include<stdlib.h>
int sum(int*, int);
void main()
{
	int ans, n;
	int* ptr;
	printf("Enter size of array=");
	scanf("%d", &n);
	ptr = (int*)malloc(sizeof(int)*n);
	ans = sum(ptr, n);
	printf("\nAddition of elements in array is=%d\n\n",ans);
}
int sum(int*ptr, int s)
{
	int ans=0;
	int i;
	for (i = 0; i < s; i++)
	{
		printf("Enter element in array=");
		scanf("%d", &ptr[i]);
	}
	for (i = 0; i < s; i++)
	{
		ans = ans + ptr[i];
	}
	return ans;
}