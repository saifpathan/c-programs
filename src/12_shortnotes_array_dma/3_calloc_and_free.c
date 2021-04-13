#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, *ptr, sum = 0;
	printf("\nEnter no. of elements=");
	scanf("%d", &n);
	ptr = (int*)calloc(n,sizeof(int));
	if (ptr == NULL)
	{
		printf("\nError!Memory not allocated");
		exit(0);
	}
	printf("\nEnter elements=");
	for (i = 0; i < n; ++i)
	{
		scanf("\t%d", ptr + i);
		sum += *(ptr + i);
	}
	printf("\nSum=%d", sum);
	printf("\n\n");
	free(ptr);
	return 0;

}