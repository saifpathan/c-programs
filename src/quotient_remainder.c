#include<stdio.h>
void main()
{
	int q;
	int r;
	int a;
	int b;
	
	printf("\nenter value of a=");
	scanf("%d",&a);
	printf("\nenter value of b=");
	scanf("%d",&b);
	
	q=a/b;
	r=a%b;
	printf("\nquotient is=%d",q);
	printf("\nremainder is=%d",r);
	printf("\n\n");
}
