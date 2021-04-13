#include<stdio.h>
void main()
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
