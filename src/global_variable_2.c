#include<stdio.h>
void myfun();
int a = 10;
void main()
{
	printf("\n%d", a);
	myfun();
	printf("\n%d\n\n", a);
}
void myfun()
{
	int a = 5;
	a = 30;
}

//yaha par a ko myfun me b declare kia h so wo stackframe me hi change hoga n uska stackframe chala jayega
//to wo dono time a ki value gloabal variable hi lega a=10
//wohi agar myfun me a declare ni kia to a global variable banega n a ki value change hogi 30