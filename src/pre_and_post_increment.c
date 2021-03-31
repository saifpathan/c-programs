#include<stdio.h>
void main()
{
	int a=0;
	int b=10;
	int c;
	c=a++ && ++b;

	printf("\na=%d",a);
	printf("\nb=%d",b);
	printf("\nc=%d",c);
}
