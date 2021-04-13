//without parameter without return 
//finding area and perimeter of rectangle
#include<stdio.h>
void dimensions();
void main()
{
	dimensions();
}
void dimensions()
{
	int width;
	int height;
	
	printf("\nEnter width of rectangle=");
	scanf("%d",& width);
	printf("\nEnter height of rectangle=");
	scanf("%d",& height);
	
	int area=width*height;
	int perimeter=2*(width+height);
	printf("\nArea of the rectangle is=%d",area);
	printf("\nPerimeter of the rectangle is=%d",perimeter);
	printf("\n\n");
}
