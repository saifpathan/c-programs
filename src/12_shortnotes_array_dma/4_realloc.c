#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n1, n2, i, *ptr;
	printf("\nEnter size=");
	scanf("%d", &n1);
	ptr = (int*)malloc(n1* sizeof(int));
	
	printf("\nAddresses of previously allocated memory=");
	for (i = 0; i < n1; ++i)
	{
		printf("%u\n", ptr + i);
	}
	printf("\nEnter new size=");
	scanf("%d", &n2);
	ptr = realloc(ptr,n2* sizeof(int));

	printf("\nAddresses of newly allocated memory=");
	for (i = 0; i < n2; ++i)
	{
		printf("%u\n", ptr + i);
	}
	printf("\n\n");
	free(ptr);
	return 0;

}