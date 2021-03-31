#include<stdio.h>
void main()
{
	int a;
	a=0;
	for(;;)
	{
		if(a<3)
		{
		printf("\n%d",a);
		}
		a++;
	}
	printf("\nOutside loop=%d",a);
}
