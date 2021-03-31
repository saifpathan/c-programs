#include<stdio.h>
void main()
{
	int a=0;
	for(printf("\nhi");a<3;printf("\nbye"))
	{
		printf("\n%d",a);
		a++;
		printf("\n");
	}
	printf("\nOutside loop=%d",a);
}
