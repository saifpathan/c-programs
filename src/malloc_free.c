#include<stdio.h>
#include<stdlib.h>
int* myfun(int*, int);
void main()
{
	int* ptr;
	int i;
	ptr = myfun(ptr, 5);
	printf("\nValues entered are=");
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", ptr[i]);
	}
	printf("\n\n");
}
int* myfun(int*p, int t)
{
	int i;
	p = (int*)malloc(sizeof(int)* 50);					
	printf("Enter values=");
	for (i = 0; i < t; i++)
	{
		scanf("%d", &p[i]);
	}
	free (p);
	printf("\n\n");
}