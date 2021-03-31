#include<stdio.h>
void main()
{
	double*ptr;						//ptr ki size 4 bytes qki pointer h jisme garbage address hoga
	*ptr=20.8;						//ptr ki strength 8 bytes h leads to unauthorised access
	printf("%ld",*ptr);				//wild pointer=unauthorised memory leads to accidental case
}									//pointer which has not been initialised is known as wild pointer
