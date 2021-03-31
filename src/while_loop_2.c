#include<stdio.h>
void main()
{
	int a=0;
	while(a<4)
	{
		printf(" %d",a);
		a++;
		printf("\n");
	}
	printf("\nOutside loop=%d",a);
}
