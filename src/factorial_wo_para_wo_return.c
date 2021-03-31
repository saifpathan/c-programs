#include<stdio.h>
void fact();
void main()
{
	fact();
}
void fact()
{
	int num;
	int fact=1;
	int i=1;
	printf("\nEnter the no.=");
	scanf("%d",&num);
	while(i<=num)
	{
		fact=fact*i;
		i++;
	}
	printf("\nFactorial is=%d",fact);
	printf("\n\n");
}
