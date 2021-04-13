#include<stdio.h>
void myfun();
int a = 10;					//global variable
void main()
{
	int a = 5;				//local variable
	printf("\n%d", a);
	myfun();
	printf("\n%d\n\n", a);
}
void myfun()
{
	a = 30;						//local variable
}

//isme pehle main me jayega n uske niche printf call hoga
//to wo a ki value main me search karega pehle as local is prefered first so a=5
//fir myfun call hoga but myfun me return to kuch kia hi ni to uska stackframe chala jayega
//firse wo a ki value main m dhundega jo ki a=5 hi ayega
//agar local me a ki value ni  dia gaya to wo global lega i.e.10 so value of in myfun also gets changed and becomes 30
//qki myfun me local a declare ni kia so declare kia to wo stack m change hoga n a=10 dikhayega