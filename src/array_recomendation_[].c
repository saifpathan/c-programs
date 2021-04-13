#include<stdio.h>
void printarray(int[], int);		//int* or int[] both r same;	int[] is recomended for array its basically pointer
void main()
{
	int arr[5] = { 10, 20, 30 };
	printarray(arr, 5);
}
void printarray(int*ptr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("\t%d", ptr[i]);
	}
	printf("\n\n");
}