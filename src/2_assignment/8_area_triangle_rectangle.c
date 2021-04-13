#include<stdio.h>
float Arr(float, float);
float Art(float, float);
void main()
{
	float l, w, ar1;
	float a, b, ar2;
	printf("\nEnter length of rectangle=");
	scanf("%f", &l);

	printf("\nEnter width of rectangle=");
	scanf("%f", &w);

	ar1 = Arr(l, w);
	printf("\nArea of rectangle=%f",ar1);
	printf("\n\n");

	printf("\nEnter sides of Triangle=");
	printf("\nEnter Height=");
	scanf("%f", &a);
	printf("\nEnter Base=");
	scanf("%f", &b);

	ar2 = Art(a, b);
	printf("\nArea of triangle=%f",ar2);
	printf("\n\n");

}
float Arr(float l, float w)
{
	float area;
	area = l*w;
	return area;
}
float Art(float a, float b)
{
	float area;
	
	area = (a*b)/(float)2;
	return area;
}