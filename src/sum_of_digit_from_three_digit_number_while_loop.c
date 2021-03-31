//sum of digits in 3 digit no.
#include<stdio.h>
void main()
{
	int n=123;
	int sum=0;
	int m;
	
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	printf("sum is=%d",sum);
	printf("\noutside loop=%d",n);
}

