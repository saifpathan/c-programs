#include<stdio.h>
void add(int,int);
void main()
{
	int a=10;
	int b=20;
	add(a,b);
}
void add(int x,int y)
{
	int c;
	c=x+y;
	printf("%d",c);
}
