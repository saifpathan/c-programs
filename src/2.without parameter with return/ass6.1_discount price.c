//without parameter with return
//price n discount


#include<stdio.h>
float discount_amount();
float discounted_price();
void main()
{
	float x;
	float y;
	
	x=discount_amount();
	y=discounted_price();
	printf("\nDiscount amount=%f",x);
	printf("\nDiscountd price=%f",y);
}
float discount_amount()
{
	float price;
	float discount_percentage;
	float discount_amount;
	
	printf("\nEnter price of item=");
	scanf("%f",&price);
	
	printf("\nEnter discount percentage on item=");
	scanf("%f",&discount_percentage);
	
	discount_amount=(discount_percentage*price)/100;
	return discount_amount;
}
float discounted_price()
{
	float price;
	float discount_amount;
	float discounted_price;
	

	
	discounted_price=(price-discount_amount);
	
	return discounted_price;
}
