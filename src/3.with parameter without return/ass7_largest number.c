//with parameter without return
//largest of 3 nos.

#include<stdio.h>
void largest_number(int,int,int);
void main()
{
	int x,y,z;
	printf("\nEnter first number=");
	scanf("%d",&x);
	printf("\nEnter second number=");
	scanf("%d",&y);
	printf("\nEnter third number=");
	scanf("%d",&z);
	largest_number(x,y,z);
}
void largest_number(int n1,int n2,int n3)
{
	if(n1>=n2)
	{
		if(n1>=n3)
		printf("\n%d is largest number",n1);
		else
		printf("\n%d is largest number",n3);
	}
	else
	{
		if(n2>=n3)
		printf("\n%d is largest number",n2);
		else
		printf("\n%d is largest number",n3);
	}
	printf("\n\n");
}
