#include<stdio.h>
int myfun();
void main()
{
	myfun();
}
int myfun()
{
	int a=10;
	int b=20;
	return a,b;				//goes right to left
}							//function returns only 1 value
