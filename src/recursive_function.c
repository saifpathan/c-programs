#include<stdio.h>
void myfun();
int a = 3;
void main()
{
	myfun();
	printf("\n\n");
}
void myfun()
{
	printf("\n%d", a);
	if (a > 0)
	{
		a--;
		myfun();
	}
	else
	{
		printf("\nBye");
	}
	printf("\nEnd%d", a);
}