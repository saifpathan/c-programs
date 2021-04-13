#include<stdio.h>
typedef struct complex
{
	int real;
	int imag;
}complex;
void storeinarray(complex*, int);
void main()
{
	complex arr[3];
	int i;
	storeinarray(arr, 3);
	printf("\nThe complex nos. are=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\t%d+%di", arr[i].real, arr[i].imag);
	}
	printf("\n\n");
}
void storeinarray(complex*ptr,int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		
		printf("\nEnter %d index real no.=", i);
		scanf("%d", &ptr[i].real);
		printf("\nEnter %d index imaginary no.=", i);
		scanf("%d", &ptr[i].imag);
	}
	printf("\n\n");

}