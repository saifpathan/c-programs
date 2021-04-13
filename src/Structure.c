#include<stdio.h>
struct complex
{
	int real;
	int imaginary;
};
void main()
{
	struct complex c1;
	c1.real = 10;
	c1.imaginary = 20;
	printf("\nThe complex no. is=%d+%di", c1.real, c1.imaginary);
	printf("\n\n");
}