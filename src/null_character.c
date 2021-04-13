#include<stdio.h>
void main()
{
	char brr[5] = { 'a', 'b' };
	int i;
	for (i = 0; i < 5; i++)
	if (brr[i] == '\0')
	{
		printf("\nhello");
	}
	else
	{
		printf("\n%c", brr[i]);
	}
	printf("\n\n\n");
}