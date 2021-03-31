#include<stdio.h>
int storeValue(int);
void main()
{
	int a;
	a=storeValue(a);
	printf("%d",a);
}
int storeValue(int x)
{
	x=10;
	return x;
}
