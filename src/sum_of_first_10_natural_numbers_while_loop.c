//sum of first 10 natural numbers
#include<stdio.h>
void main()
{
	int num=10;
	int i=1;
	int sum=0;
	
	while(i<=num)
	{
		sum=sum+i;
		i++;
	}
	printf("\nsum of first 10 natural numbers=%d",sum);
	printf("\noutside loop=%d",i);
}
