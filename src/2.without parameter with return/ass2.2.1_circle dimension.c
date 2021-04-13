//without parameter with return
//dimensions of circle

#include<stdio.h>
float area();
float perimeter();
void main()
{
	float x;
	float y;
	x=area();
	y=perimeter();
	printf("\nArea of circle is=%f",x);
	printf("\nPerimeter of circle is=%f",y);
}
float area()
{
	float r,area;
	
	printf("\nEnter radius of circle=");
	scanf("%f",& r);
	
	area=3.14*r*r;
	return area;
	
}
float perimeter()
{
	float r,perimeter;
	
	printf("\nEnter radius of circle=");
	scanf("%f",& r);
	
	perimeter=2*3.14*r;
	return perimeter;
}
