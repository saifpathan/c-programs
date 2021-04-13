//without parameter without return
//price n discount


#include<stdio.h>
void discounted_price();
void main()
{
	discounted_price();
}
void discounted_price()
{
	float price;
	float discount_percentage;
	float discount_amount;
	float discounted_price;
	
	printf("\nEnter price of item=");
	scanf("%f",&price);
	
	printf("\nEnter discount percentage on item=");
	scanf("%f",&discount_percentage);
	
	discount_amount=(discount_percentage*price)/100;
	discounted_price=(price-discount_amount);
	
	printf("\nDiscount amount=%f",discount_amount);
	printf("\nDiscountd price=%f",discounted_price);
}
