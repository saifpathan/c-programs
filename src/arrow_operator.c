#include<stdio.h>
typedef struct complex
{
	int real;
	int imag;
}complex;
void main()
{
	complex c1 = { 10, 20 };			//initialisation
	complex*ptr;
	ptr = &c1;

	printf("\n %d + %d i", c1.real, c1.imag);
	printf("\n %d + %d i", ptr->real, ptr->imag);

	printf("\n\n");
}