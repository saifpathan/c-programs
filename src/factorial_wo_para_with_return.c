#include<stdio.h>
int fact();
void main()
{
	int ans;
	ans=fact();
	printf("\nFactorial is=%d",ans);
}
int fact()
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
	return fact;
}
