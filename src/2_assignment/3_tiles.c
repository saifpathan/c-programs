#include<stdio.h>
void main()
{
	float a, b, c, d, e;
	printf("Area of room is(in sq.m.)=");
	scanf("%f", &a);

	printf("\nSize of tiles=");
	printf("\nlength(in cm.)=");
	scanf("%f", &b);
	printf("\nwidth(in cm.)=");
	scanf("%f", &c);

	d= b*c;			//area of tiles

	e = (a / d)*10000;
	printf("\nNo. of tiles required=%f", e);
	printf("\n\n");


}