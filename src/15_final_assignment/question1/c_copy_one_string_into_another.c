#include<stdio.h>
void mystrcpy(char*, char*);
void main()
{
	char arr[5] = { 'a', 'b', 'c' };
	char brr[5];
	mystrcpy(brr, arr);
}
void mystrcpy(char*brr, char*arr)
{
	int i = 0;
	while (arr[i] != '\0')
	{
		brr[i] = arr[i];
		i++;
	}
	brr[i] = '\0';
	printf("\nCopied string brr is=%s", brr);
	printf("\n\n");
}