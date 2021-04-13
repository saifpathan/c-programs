#include<stdio.h>
int mysqr(int);
void main()
{
	int sq=mysqr(5);
	printf("\nSquare of 5=%d\n\n", sq);
}
int mysqr(int a)
{
	return a*a;
}