#include<stdio.h>
float area(float, float);
void main()

{
	float a, b, ar;
	printf("Enter the length of rectangle=");
	scanf("%f",& a);
	printf("Enter the width of rectangle=");
	scanf("%f",& b);

	
	ar = area(a, b);
	printf("Area of rectangle is=%f", ar);
	printf("\n\n");
}
float area(float a, float b)
{
	float area;
	area = a*b;
	return area;
}