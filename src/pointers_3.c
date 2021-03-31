#include<stdio.h>
void myfun(int*);
void main()
{
	int a=10;
	myfun(&a);
	printf("\nValue of a is=%d",a);
}
void myfun(int*ptr)
{
	*ptr=88;					//L.H.S.=value at address in ptr=value at 2000
}

