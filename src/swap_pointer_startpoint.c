#include<stdio.h>
int myfun(int,int);
void main()
{
	int a=10;
	int b=20;
	myfun(a,b);
	printf("\n%d",a);
	printf("\n%d",b);
}
int myfun(int a,int b)
{
	int temp;
	temp=a;							//function call hone bad myfun ka stackframe jayega
	a=b;							//swapping hua but op ni aayega qki main me ni hua
	b=temp;							//return do value ni kr sakte
}									//pass by address karna padega
									//iske liye 'pointers' padhna juroori h
