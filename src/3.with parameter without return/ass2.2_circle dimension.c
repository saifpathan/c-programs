//with parameter without return
//area and perimeter of circle

#include<stdio.h>
void dimensions(float);
void main()
{
	float x;
	printf("\nEnter radius of circle=");
	scanf("%f",& x);
	dimensions(x);
}

void dimensions(float r)
{
	float area,perimeter;
	
	area=3.14*r*r;
	perimeter=2*3.14*r;
	
	printf("\nArea of circle is=%f",area);
	printf("\nPerimeter of circle is=%f",perimeter);
	printf("\n\n");
}
