#include<stdio.h>
typedef struct complex
{
	int real;
	int imag;
}complex;
void printComplex(complex*);
void main()
{
	complex c1 = { 10, 20 };
	printComplex(&c1);
	printf("\n\n");
}
void printComplex(complex*ptr)
{
	printf("\n%d+%di", ptr->real, ptr->imag);
}