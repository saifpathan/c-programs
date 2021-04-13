#include<stdio.h>
typedef struct complex
{
	int real;
	int imag;
}complex;
void main()
{
	complex arr[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("\nEnter %d index real no.=",i);
		scanf("%d", &arr[i].real);
		printf("\nEnter %d index imaginary no.=",i);
		scanf("%d", &arr[i].imag);
	}
	printf("\nThe complex nos. are=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\t%d+%di", arr[i].real,arr[i].imag);
	}
	printf("\n\n");

}