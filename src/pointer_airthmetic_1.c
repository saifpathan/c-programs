#include<stdio.h>
void main()
{
	int a=10;
	int*ptr=&a;
	printf("\n%d",*ptr);
	printf("\n%d",*ptr+0);
	printf("\n%d",*ptr+1);					//* pehle priority lega isliye pointer airthmetic use hota
}
