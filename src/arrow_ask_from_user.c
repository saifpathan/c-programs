#include<stdio.h>
typedef struct complex
{
	int real;
	int imag;
}complex;
void storeComplex(complex*);
void printComplex(complex*);
void main()
{
	complex c1;
	storeComplex(&c1);
	printComplex(&c1);
	printf("\n\n");
}
void storeComplex(complex*ptr)
{
	printf("\nEnter real part=");
	scanf("%d", &ptr->real);
	printf("\nEnter imaginary part=");
	scanf("%d", &ptr->imag);

}
void printComplex(complex*ptr)
{
	printf("\nComplex number=%d+%di", ptr->real, ptr->imag);
}