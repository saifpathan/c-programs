#include<stdio.h>
void main()
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
