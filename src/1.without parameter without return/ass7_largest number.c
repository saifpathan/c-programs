//without parameter without return
//largest of 3 nos.

#include<stdio.h>
void largest_number();
void main()
{
	largest_number();
}
void largest_number()
{
	int n1,n2,n3;
	printf("\nEnter first number=");
	scanf("%d",&n1);
	printf("\nEnter second number=");
	scanf("%d",&n2);
	printf("\nEnter third number=");
	scanf("%d",&n3);
	
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
