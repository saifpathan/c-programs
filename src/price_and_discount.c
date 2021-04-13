#include<stdio.h>
void main()
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
