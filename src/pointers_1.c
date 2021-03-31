#include<stdio.h>
void main()
{
	int a=10;								//initialisation
	int *b;									//pointer
	printf("\nValue of old a is=%d",a);
	b=&a;									//gives address
	*b=30;									//value at address in b=value at 2000=L.H.S
	printf("\nValue of new a is=%d",a);
	printf("\nValue of new b is=%d",b);
}
