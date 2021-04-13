//with parameter without return type
//student discount

#include<stdio.h>
void student_discount(float,int);
void main()
{
	float x;
	int y;
	printf("\nEnter the price?=");
	scanf("%f",&x);
	printf("\nAre you student?(1.yes/2.no)=");
	scanf("%d",&y);
	student_discount(x,y);
}
void student_discount(float a,int choice)
{
	float discount_amount,discounted_price;
	
	if(choice==1)
	{
		if(a>500)
			discount_amount=(20*a)/100;
		else
			discount_amount=(10*a)/100;
	}
	else
	{
		if(a>600)
			discount_amount=(15*a)/100;
		else
			discount_amount=0;
	}
	
	discounted_price=(a-discount_amount);
	printf("\nDiscounted price=%f",discounted_price);
}
