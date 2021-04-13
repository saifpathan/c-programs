#include<stdio.h>
struct complex
{
	int real;
	int imag;
};
void main()
{
	struct complex c1, c2;
	printf("\nEnter real number of 1st number=");
	scanf("%d", &c1.real);
	printf("\nEnter imaginary number of 1st number=");
	scanf("%d", &c1.imag);

	printf("\nEnter real number of 2nd number=");
	scanf("%d", &c2.real);
	printf("\nEnter imaginary number of 2nd number=");
	scanf("%d", &c2.imag);

	printf("\n1st number=%d+%di", c1.real, c1.imag);
	printf("\n2nd number=%d+%di", c2.real, c2.imag);

	printf("\n\n");
}