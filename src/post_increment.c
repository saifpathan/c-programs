#include<stdio.h>
void main()
{
	int a=10;
	int b=0;
	int c;
	c=(a++ && b++);
	printf("\n%d",a);
	printf("\n%d",b);
	printf("\n%d",c);
}
