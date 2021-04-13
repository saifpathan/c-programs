//without parameters without return
//operand and operator

#include<stdio.h>
void operation();
void main()
{
	operation();
}
void operation()
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
	printf("\nAnswer is=%d",ans);
	printf("\n\n");
}
