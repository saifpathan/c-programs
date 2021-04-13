//without parameters with return
//operand and operator

#include<stdio.h>
int operation();
void main()
{
	int ans;
	ans=operation();
	printf("\nAnswer is=%d",ans);
}
int operation()
{
	int a,b,ans;
	char op;
	
	printf("\nEnter first number=");
	scanf("%d",&a);
	printf("\nEnter second number=");
	scanf("%d",&b);
	printf("\nEnter Operator(+,-,*,/,%)=");
	scanf("%*c%c",&op);
	
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
