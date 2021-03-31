#include<stdio.h>
void main()
{
	int a;
	for(a=0;a<5;a++)
	printf("\n%d",a);			//no curly bracket so only 1 line below for will execute
	printf("\nHello");
	printf("\nOutside loop=%d",a);
}
