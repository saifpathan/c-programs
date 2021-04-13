#include<stdio.h>
void main()
{
	struct complex					//local declaration of structure
	{
		int real;					//to ye datatype sirf main ko hi chalega
		int imag;
	};
	struct complex c1;				//therefore it is recommended structure declaration should be global so that it is
	c1.imag = 10;					//accessible to every function
	c1.real = 20;
	printf("\nComplex no. is=%d+%di", c1.real, c1.imag);
	printf("\n\n");
}