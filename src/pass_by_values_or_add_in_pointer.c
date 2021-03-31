#include<stdio.h>
void main()
{
	int a=10;
	int b=20;
	int* ptr1;
	int* j;
	ptr1=&a;
	j=&b;
	ptr1=j;						//pass by value hoga same as a=b right to left jayega to ptr1 me 3000 jayega
	*ptr1=44;
	printf("%d",b);
}
