//without parameter without return
//area and perimeter of circle

#include<stdio.h>
void dimensions();
void main()
{
	dimensions();
}

void dimensions()
{
	float r,area,perimeter;
	
	printf("\nEnter radius of circle=");
	scanf("%f",& r);
	
	area=3.14*r*r;
	perimeter=2*3.14*r;
	
	printf("\nArea of circle is=%f",area);
	printf("\nPerimeter of circle is=%f",perimeter);
	printf("\n\n");
}
