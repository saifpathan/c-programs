//factorial
#include<stdio.h>
void main()
{
	int i;
	int f;
	int number=6;
	i=f=1;
	while(i<=number)
	{
		f=f*i;
		i++;
	}
	printf("Factorial of %d is=%d",number,f);
	printf("\noutside loop=%d",i);
}
