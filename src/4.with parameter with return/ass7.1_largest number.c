//with parameter with return
//largest of 3 nos.

#include<stdio.h>
int largest_number(int,int,int);
void main()
{
	int max;
	int x,y,z;
	printf("\nEnter first number=");
	scanf("%d",&x);
	printf("\nEnter second number=");
	scanf("%d",&y);
	printf("\nEnter third number=");
	scanf("%d",&z);
	max=largest_number(x,y,z);
	printf("\nMaximum no. is=%d",max);
}
int largest_number(int n1,int n2,int n3)
{
	int max;
	
	
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
