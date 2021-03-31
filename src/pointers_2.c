#include<stdio.h>
void main()
{
	int y=0;
	int x;
	int *ptr;
	x=44;
	ptr=&x;
	y=*ptr;								//R.H.S.=value at address in ptr=value at 8000=44
	printf("\nValue of y is=%d",y);
}
