#include<stdio.h>
void main()
{
	int*ptr;
	int a=10;
	int i=0;
	ptr=&a;
	for(i=0;i<5;i++)
	{
		printf("\n%d",*(ptr+i));		// pehle bracket fir * priority
	}									//unauthorised access
}										//so we need sequencial access
										//here comes array
