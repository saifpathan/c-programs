#include<stdio.h>
typedef struct complex
{
	int real;
	int imag;
}complex;
void main()
{
	complex arr[3];
	complex*ptr;
	ptr = arr;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("\nEnter %d index real no.=", i);
		scanf("%d", &ptr[i].real);
		printf("\nEnter %d index imaginary no.=", i);
		scanf("%d", &ptr[i].imag);
	}
	printf("\nThe complex nos. are=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\t%d+%di", ptr[i].real, ptr[i].imag);
	}
	printf("\n\n");

}