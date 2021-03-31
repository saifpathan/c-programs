#include<stdio.h>
void main()
{
	int a;
	a=printf("hi")||printf("bye");   //yaha or me pehle hi=nonzero value h so wo direct decision lega n bye skip karega
	printf("%d",a);                  //a=nonzero so o/p=1
}
