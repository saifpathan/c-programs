#include<stdio.h>
void main()
{
	char arr[5] = { 'a', 'b', 'c' };
	char brr[5];
	strcpy(brr, arr);
	printf("\nCopied string is brr=%s\n\n", brr);
}