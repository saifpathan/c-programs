//with parameter without return 
//finding area and perimeter of rectangle
#include<stdio.h>
void dimensions(int,int);
void main()
{
	int x;
	int y;
	printf("\nEnter width of rectangle=");
	scanf("%d",& x);
	printf("\nEnter height of rectangle=");
	scanf("%d",& y);
	dimensions(x,y);
}
void dimensions(int width,int height)
{
	int area=width*height;
	int perimeter=2*(width+height);
	printf("\nArea of the rectangle is=%d",area);
	printf("\nPerimeter of the rectangle is=%d",perimeter);
	printf("\n\n");
}
