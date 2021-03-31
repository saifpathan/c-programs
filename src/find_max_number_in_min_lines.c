#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	
	printf("\n Enter the value of a:");
	scanf("%d",&a);
	printf("\n Enter the value of b:");
	scanf("%d",&b);
	printf("\n Enter the value of c:");
	scanf("%d",&c);
	
	if(a>b && a>c)
		printf("\na is max=%d",a);
	if(b>a && b>c)
		printf("\nb is max=%d",b);
	if(c>b && c>a)
		printf("\nc is max=%d",c);
}
