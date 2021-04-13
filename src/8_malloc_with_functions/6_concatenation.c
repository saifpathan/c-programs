#include<stdio.h>
#include<stdlib.h>
void cc(int*, int*, int*);
void main()
{
	int* ptr1;
	int* ptr2;
	int* ptr3;
	int i;
	ptr1 = (int*)malloc(sizeof(int)* 3);
	ptr2 = (int*)malloc(sizeof(int)* 5);
	ptr3 = (int*)malloc(sizeof(int)* 8);
	printf("Enter 1st array values=\n");
	for (i = 0; i < 3; i++)
	{
		printf("\tEnter value=");
		scanf("%d", &ptr1[i]);
	}
	printf("Enter 2nd array values=\n");
	for (i = 0; i < 5; i++)
	{
		printf("\tEnter value=");
		scanf("%d", &ptr2[i]);
	}
	cc(ptr1, ptr2, ptr3);
	printf("\n\n");
}
void cc(int* ptr1, int* ptr2, int* ptr3)
{
	int i, j;
	for (i = 0; i < 3; i++)
	{
		ptr3[i] = ptr1[i];
	}
	for (j = 0; j < 5; j++)
	{
		ptr3[i + j] = ptr2[j];
	}
	printf("\nArray values after concatenation=");
	for (i = 0; i < 8; i++)
	{
		printf("\t%d", ptr3[i]);
	}
}