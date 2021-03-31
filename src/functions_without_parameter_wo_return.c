#include<stdio.h>
void add();
void main()
{
	printf("\nStart");
	add();
	printf("\nBye");
}
void add()
{
	int a=10;
	int b=20;
	int c;
	c=a+b;
	printf("\n%d",c);
}
