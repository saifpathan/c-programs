//without parameter with return
//largest of 3 nos.

#include<stdio.h>
int largest_number();
void main()
{
	int max;
	max=largest_number();
	printf("\nMaximum no. is=%d",max);
}
int largest_number()
{
	int n1,n2,n3,max;
	printf("\nEnter first number=");
	scanf("%d",&n1);
	printf("\nEnter second number=");
	scanf("%d",&n2);
	printf("\nEnter third number=");
	scanf("%d",&n3);
	
	if(n1>=n2)
	{
		if(n1>=n3)
			max=n1;
		else
			max=n3;
	}
	else
	{
		if(n2>=n3)
			max=n2;
		else
			max=n3;
	}
	return max;
}
