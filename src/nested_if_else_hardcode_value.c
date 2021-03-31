#include<stdio.h>
void main()
{
	int a=70;
	int b=45;
	int c=65;
	
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
