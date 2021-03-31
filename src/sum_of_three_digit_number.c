#include<stdio.h>
void main()
{
	int num;
	int q;
	int r;
	int q1;
	int r1;
	int ans;
	
	printf("\nenter the number:");
	scanf("%d",&num);
	
	q=num/10;
	r=num%10;
	q1=q/10;
	r1=q%10;
	ans=q1+r1+r;
	printf("\nsum of digits is=%d",ans);
}
