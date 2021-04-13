//without parameter with return type
//finding area and perimeter of rectangle
#include<stdio.h>
int area();
int perimeter();
void main()
{
	int x;
	int y;
	x=area();
	y=perimeter();
	printf("\nArea of the rectangle is=%d",x);
	printf("\nPerimeter of the rectangle is=%d",y);
}
int area()
	{
		int width;
		int height;
		
		printf("\nEnter width of rectangle=");
		scanf("%d",& width);
		printf("\nEnter height of rectangle=");
		scanf("%d",& height);
		
		int area=width*height;
		
		return area;
	}
int perimeter()
	{
		int width;
		int height;
		
		printf("\nEnter width of rectangle=");
		scanf("%d",& width);
		printf("\nEnter height of rectangle=");
		scanf("%d",& height);
		
		int perimeter=2*(width+height);
		
		return perimeter;
	}

