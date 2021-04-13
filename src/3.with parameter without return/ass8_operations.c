//with parameters without return
//operand and operator

#include<stdio.h>
void operation(int,int,char);
void main()
{
	int x,y;
	char z;
	printf("\nEnter first number=");
	scanf("%d",&x);
	printf("\nEnter second number=");
	scanf("%d",&y);
	printf("\nEnter Operator(+,-,*,/,%)=");
	scanf("%*c%c",&z);
	operation(x,y,z);
}
void operation(int a,int b,char op)
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
	printf("\nAnswer is=%d",ans);
	printf("\n\n");
}
