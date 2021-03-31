#include<stdio.h>
void main()
{
	int i;
	for(i=0;i<=10;i=i+2)
	{
		printf("\n%d",i);
		printf("\n");
	}
	printf("\nOutside loop=%d",i);
}
