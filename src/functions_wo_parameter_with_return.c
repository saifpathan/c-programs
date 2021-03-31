#include<stdio.h>
int sum();
void main()
{
	int x;
	x=sum();
	printf("%d",x);
}
int sum()
{
	int a=10;
	int b=20;
	int c;
	c=a+b;
	return c;
}
