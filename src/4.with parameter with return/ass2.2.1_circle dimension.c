//with parameter with return
//dimensions of circle

#include<stdio.h>
float area(float);
float perimeter(float);
void main()
{
	float x;
	float y;
	float z;
	printf("\nEnter radius of circle=");
	scanf("%f",& z);
	x=area(z);
	y=perimeter(z);
	printf("\nArea of circle is=%f",x);
	printf("\nPerimeter of circle is=%f",y);
}
float area(float r)
{
	float area;
		
	area=3.14*r*r;
	return area;
	
}
float perimeter(float r)
{
	float perimeter;
		
	perimeter=2*3.14*r;
	return perimeter;
}
