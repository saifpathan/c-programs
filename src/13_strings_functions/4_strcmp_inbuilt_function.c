#include<stdio.h>
#include<string.h>
void main()
{
	char arr[20] = "saif";
	char brr[20] = "saif";
	int result;
	result = strcmp(arr, brr);
	printf("\nStrcmp(arr,brr)=%d\n", result);
}