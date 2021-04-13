#include<stdio.h>
#include<string.h>

void main()
{
	char arr[20] = "hello";
	char brr[20] = "world";
	strcat(arr, brr);
	printf("\nAfter concatenation=%s", arr);
	printf("\n\n");


}