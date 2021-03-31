#include<stdio.h>
void main()
{
	int a;
	int b;
	int c;
	
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("enter the value of c:");
	scanf("%d",&c);
	
	if (a>b)
	{
		if(a>c)
		{
			printf("\n a is max number=%d",a);
			printf("\n\n");
		}
		else
		{
			printf("\n c is max number=%d",c);
			printf("\n\n");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n b is max number=%d",b);
			printf("\n\n");
		}
		else
		{
			printf("\n c is max number=%d",c);
			printf("\n\n");
		}
	}
}
