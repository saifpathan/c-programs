#include<stdio.h>
void main()
{
	int num;
	int sum=0;
	int m;
	int reverse=0;
	
	printf("\nEnter the 3 digit no.=");
	scanf("%d",& num);
	
	while(num>0)
	{
		m=num%10;
		sum=sum+m;
		num=num/10;
		reverse=reverse*10+m;
	}
	printf("\nSum of digits is=%d",sum);
	printf("\nReversed no. is=%d",reverse);
}
