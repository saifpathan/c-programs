//with parameter with return
//sum of 3 digit no. and reverse it

#include<stdio.h>
int sum(int);
int reverse(int);
void main()
{
	int x;
	int y;
	int z;
	printf("\nEnter the 3 digit no.=");
	scanf("%d",& z);
	x=sum(z);
	y=reverse(z);
	printf("\nSum of digits is=%d",x);
	printf("\nReversed no. is=%d",y);
	
}
int sum(int num)
{
	int sum=0;
	int m;
	

	
	while(num>0)
	{
		m=num%10;
		sum=sum+m;
		num=num/10;
	}
	return(sum);
}
int reverse(int num)
{
	int m;
	int reverse=0;
	
	while(num>0)
	{
		m=num%10;
		num=num/10;
		reverse=reverse*10+m;
	}
	return(reverse);
}
