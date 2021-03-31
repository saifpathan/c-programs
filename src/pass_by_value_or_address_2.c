#include<stdio.h>
void main()					//java is everywhere pass by value
{
	int*p;
	int a=10;
	p=&a;
	myfun(&a,p);
}
myfun(int*j,int*ptr)
{
}
