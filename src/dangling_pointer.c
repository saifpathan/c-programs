#include<stdio.h>
int* myfun();
void main()
{
	int*ptr;
	ptr = myfun();
	printf("\nArray values=%d", ptr);	
	printf("\n\n");													//stack memory cant b shared
}														//so here comes heap memory
int* myfun()
{
	int arr[5] = { 10, 20, 30 };
	return arr;
}