#include<stdio.h>
void myfun(int*,int*);
void main()
{
	int a=10;
	int b=20;
	printf("\nBefore value of a is=%d",a);
	printf("\nBefore value of b is=%d",b);
	myfun(&a,&b);
	printf("\nNew value of a is=%d",a);
	printf("\nNew value of b is=%d",b);
}
void myfun(int*p1,int*p2)
{
	int temp;
	temp=*p1;							//R.H.S.=value at address in p1=value at 2000=10
	*p1=*p2;							//value at 2000=value at 3000
	*p2=temp;							//L.H.S.=value at 3000=10=b=10
}
