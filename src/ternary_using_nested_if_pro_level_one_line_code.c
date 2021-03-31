#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	int max;
	
	printf("\nenter the value of a=");
	scanf("%d",&a);
	printf("\nenter the value of b=");
	scanf("%d",&b);
	printf("\nenter the value of c=");
	scanf("%d",&c);
	
	max=a>b?(a>c?a:c):(b>c?b:c);
	
	printf("\nmaximum no. is=%d",max);
	printf("\n\n");
}
