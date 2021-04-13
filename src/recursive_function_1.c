#include<stdio.h>
void myfun(int);
void main()
{
	myfun(3);
	printf("\n\n");
}
void myfun(int a)
{
	printf("\nStart %d", a);
	if (a > 0)
	{
		a--;
		myfun(a);
	}
	else
	{
		printf("\nBye");
	}
	printf("\nEnd %d", a);
}