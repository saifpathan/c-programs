//with parameter without return
//price n discount


#include<stdio.h>
void discounted_price(float,float);
void main()
{
	float x;
	float y;
	printf("\nEnter price of item=");
	scanf("%f",&x);
	
	printf("\nEnter discount percentage on item=");
	scanf("%f",&y);
	discounted_price(x,y);
}
void discounted_price(float price,float discount_percentage)
{
	float discount_amount;
	float discounted_price;
	

	
	discount_amount=(discount_percentage*price)/100;
	discounted_price=(price-discount_amount);
	
	printf("\nDiscount amount=%f",discount_amount);
	printf("\nDiscountd price=%f",discounted_price);
}
