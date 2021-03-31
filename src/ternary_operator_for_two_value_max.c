#include<stdio.h>
void main()
{
	int a;
	int b;
	int max;
	
	printf("\nenter the value of a=");
	scanf("%d",&a);
	printf("\nenter the value of b=");
	scanf("%d",&b);
	
	max=a>b?a:b;
	printf("\nmaximum value is=%d",max);
	printf("\n\n");
}
