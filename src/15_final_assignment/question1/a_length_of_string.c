#include<stdio.h>
int mystrlen(char*);
void main()
{
	char arr[5] = { 'a', 'b', 'c' };
	int len;
	len = mystrlen(arr);
	printf("\nLength of string is=%d\n\n\n", len);
}
int mystrlen(char* ptr)
{
	int i = 0;
	while (ptr[i] != '\0')
	{
		i++;
	}
	return i;
}