#include<stdio.h>
void main()
{
	int a=10;
	int*ptr;
	ptr=&a;
	printf("\n%d",a);
	printf("\n%u",&a);			//address dekhna hoga to unsigned integer hoge so %d aur &
	printf("\n%u",ptr);
	printf("\n%u",&ptr);
}
