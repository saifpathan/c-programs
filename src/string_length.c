#include<stdio.h>
void main()
{
	char arr[5] = { 'a', 'b', 'c' };
	int i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	printf("\n%d\n\n", i);
}