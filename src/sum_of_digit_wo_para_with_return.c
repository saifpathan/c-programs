#include<stdio.h>
int sum();
void main()
{
	int ans;
	ans=sum();
	printf("\nSum of digits is=%d",ans);
	
}
int sum()
{
	int num,q,q1,r,r1,ans;
	printf("\nEnter the number=");
	scanf("%d",&num);
	q=num/10;
	r=num%10;
	q1=q/10;
	r1=q%10;
	ans=q1+r1+r;
	return ans;
	
}
