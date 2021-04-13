#include<stdio.h>
#include<stdlib.h>
void myfun(int*, int);
void main()
{
	int* ptr;
	int i;
	ptr = (int*)malloc(sizeof(int)* 5);					//allocation calling function kar raha h and use called
	myfun(ptr, 5);
	printf("\nValues entered are=");
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", ptr[i]);
	}
	printf("\n\n");
}
void myfun(int*p,int t)
{
	int i;
	printf("Enter values=");
	for (i = 0; i < t; i++)
	{
		scanf("%d", &p[i]);
	}
	
	printf("\n\n");
}