#include<stdio.h>
void main()
{
	int a=10;
	int b=0;
	int c=0;
	b=a++;
	c=++a;
	printf("\na=%d",a);
	printf("\nb=%d",b);
	printf("\nc=%d",c);
}
