#include<stdio.h>
int mystrlen(char*);
void main()
{
	char arr[5] = { 'a', 'b', 'c' };
	int len;
	len = mystrlen(arr);
	printf("\n%d\n\n", len);
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