#include<stdio.h>
void main()
{
	float a,discount_amount,discounted_price;
	int choice;

	printf("\nEnter the price?=");
	scanf("%f",&a);
	printf("\nAre you student?(1.yes/2.no)=");
	scanf("%d",&choice);
	
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
