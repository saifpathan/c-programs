#include<stdio.h>
void main()
{
	int a=100;
	int b=20;
	int c;
	c=a=b;
	printf("\n%d",c);   
}
								//assignment goes from right to left
								//initially b gets value of 20 as assigned, b=20
								//then a gets value of b, a=20
								//then c gets value of a, a=20

