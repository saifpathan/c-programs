//with parameters with return
//operand and operator

#include<stdio.h>
int operation(int,int,char);
void main()
{
	int ans;
	int x,y;
	char z;
	printf("\nEnter first number=");
	scanf("%d",&x);
	printf("\nEnter second number=");
	scanf("%d",&y);
	printf("\nEnter Operator(+,-,*,/,%)=");
	scanf("%*c%c",&z);
	ans=operation(x,y,z);
	printf("\nAnswer is=%d",ans);
}
int operation(int a,int b,char op)
{
	int ans;
	
	if(op=='+')
	{
		ans=a+b;
	}
	else if(op=='-')
	{
		ans=a-b;
	}
	else if(op=='*')
	{
		ans=a*b;
	}
	else if(op=='/')
	{
		ans=a/b;
	}
	else
	{
		ans=a%b;
	}
	
	return ans;
}
