#include<stdio.h>
typedef struct complex
{
	int real;
	int imag;
}complex;
void main()
{
	complex arr[3];
	arr[0].real = 10;
	arr[0].imag = 20;
	arr[1].real = 30;
	arr[1].imag = 40;
	arr[2].real = 50;
	arr[2].imag = 60;

	printf("\n1st number is=%d+%di", arr[0].real, arr[0].imag);
	printf("\n2nd number is=%d+%di", arr[1].real, arr[1].imag);
	printf("\n3rd number is=%d+%di", arr[2].real, arr[2].imag);

	printf("\n\n");

}