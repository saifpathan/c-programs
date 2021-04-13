//with parameter with return type
//finding area and perimeter of rectangle
#include<stdio.h>
int area(int,int);
int perimeter(int,int);
void main()
{
	int a;
	int b;
	int x;
	int y;
	printf("\nEnter width of rectangle=");
	scanf("%d",& a);
	printf("\nEnter height of rectangle=");
	scanf("%d",& b);
	
	x=area(a,b);
	y=perimeter(a,b);
	printf("\nArea of the rectangle is=%d",x);
	printf("\nPerimeter of the rectangle is=%d",y);
}
int area(int width,int height)
	{
		int area=width*height;
		
		return area;
	}
int perimeter(int width,int height)
	{
		
		int perimeter=2*(width+height);
		
		return perimeter;
	}

