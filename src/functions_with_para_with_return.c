#include<stdio.h>
int add(int,int);
void main()
{
	int ans;
	int a=10;
	int b=20;
	ans=add(a,b);
	printf("%d",ans);
}
int add(int x,int y)
{
	int c;
	c=x+y;
	return c;
	
}
