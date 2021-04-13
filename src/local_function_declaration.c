#include<stdio.h>
void main()
{
	int myfun();			//local function declaration
	myfun();				//local function call
}
int myfun()
{
	int x = 10;
	return x;
}

//is function ko sirf main hi call kar payega