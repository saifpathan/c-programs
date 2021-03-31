#include<stdio.h>
void main()
{
	int a;
	for(a=0;a<3;a++);			//semicolon so loop ends
	{
		printf("\n%d",a);			
	}
	printf("\nOutside loop=%d",a);
}
