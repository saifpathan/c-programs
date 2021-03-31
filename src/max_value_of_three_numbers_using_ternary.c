#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	int max;
	int ans;
	
	printf("\nenter the value of a=");
	scanf("%d",&a);
	printf("\nenter the value of b=");
	scanf("%d",&b);
	printf("\nenter the value of c=");
	scanf("%d",&c);
	
	max=a>b?a:b;
	ans=c>max?c:max;
	printf("\nmaximum no. is=%d",ans);
	printf("\n\n");
}
