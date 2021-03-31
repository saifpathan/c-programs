#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int c;
	int d;
	int e;
	int f;
	c=a&&b;                     //as int value returns zero non zero value to yaha a and b dono non zero h so o/p=1
	e=a||b;                     //yaha b same
	a=0;                        //ab a overwrites a=10 value n becomes a=0 
	d=a||b;                     //0 or non 0 =1
	f=a&&b;                     //0 and non 0=0
	printf("\n%d",c);
	printf("\n%d",e);
	printf("\n%d",d);
	printf("\n%d",f);
}
