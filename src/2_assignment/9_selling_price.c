#include<stdio.h>
float discounted_price(float, float);
void main()
{
	float x;
	float y;
	float z;
	float a;
	printf("\nEnter price of item=");
	scanf("%f", &z);

	printf("\nEnter discount percentage on item=");
	scanf("%f", &a);

	y = discounted_price(z, a);
	printf("\nSelling price of book=%f", y);
	printf("\n\n");
}
float discounted_price(float price, float discount_percentage)
{
	float discount_amount;
	float discounted_price;

	discount_amount = (discount_percentage*price) / 100;
	
	discounted_price = (price - discount_amount);

	return discounted_price;
}