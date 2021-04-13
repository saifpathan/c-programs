#include<stdio.h>
void swap(int*, int*);
void main()
{
	int a, b;
	int* a1;
	int* b1;
	a1 = &a;
	b1 = &b;

	printf("\nEnter first number=");
	scanf("%d", &a);
	printf("\nEnter second number=");
	scanf("%d", &b);

	swap(a1, b1);
	printf("\nAfter swap=");
	printf("\nFirst number is=%d", a);
	printf("\nSecond number is=%d", b);
	printf("\n\n");

}
void swap(int* a1, int* b1)
{
	int temp;
	temp = *a1;
	*a1 = *b1;
	*b1 = temp;
}