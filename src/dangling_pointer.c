#include<stdio.h>
int*myfun();
void main()
{
	int*ptr;
	ptr=myfun();
	printf("%d",*ptr);				//unauthorise ho gaya(deloacte)=room mila,checkout kia;fir usme jaa rahe ho
}									//use dangling pointer kehte h
int*myfun()
{
	int b=20;
	return &b;
}
