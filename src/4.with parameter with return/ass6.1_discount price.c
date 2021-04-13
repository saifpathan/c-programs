//with parameter with return
//price n discount


#include<stdio.h>
float discount_amount(float,float);
float discounted_price(float,float);
void main()
{
	float x;
	float y;
	float z;
	float a;
	printf("\nEnter price of item=");
	scanf("%f",&z);
	
	printf("\nEnter discount percentage on item=");
	scanf("%f",&a);
	
	x=discount_amount(z,a);
	y=discounted_price(z,a);
	printf("\nDiscount amount=%f",x);
	printf("\nDiscountd price=%f",y);
}
float discount_amount(float price,float discount_percentage)
{
	float discount_amount;
	
	discount_amount=(discount_percentage*price)/100;
	return discount_amount;
}
float discounted_price(float price,float discount_percentage)
{
	float discount_amount;
	float discounted_price;
	
	discounted_price=(price-discount_amount);
	
	return discounted_price;
}
