#include<stdio.h>
#include<string.h>
typedef struct customer
{
	int billno;
	char name[20];
	double total;
	double net;
	int discount;
}customer;
customer storeCustomer1(customer);
void displayCustomer1(customer);
void storeCustomer2(customer*);
void displayCustomer2(customer*);
void main()
{
	customer c1, c2;
	printf("\n\tD-MART");
	printf("\n\t  CUSTOMER BILLING");
	c1 = storeCustomer1(c1);
	displayCustomer1(c1);
	printf("\n\n");

	storeCustomer2(&c2);
	displayCustomer2(&c2);
	printf("\n\n");
}
customer storeCustomer1(customer c1)
{
	c1.billno = 100;
	strcpy(c1.name, "Saif");
	c1.total = 25000.50;
	c1.net = 24500.50;
	c1.discount = 500;
	return c1;
}
void displayCustomer1(customer c1)
{
	printf("\nBill no.is=%d", c1.billno);
	printf("\nCustomer name is=%s", c1.name);
	printf("\nTotal is=%.2lf", c1.total);
	printf("\nDiscount is is=%d", c1.discount);
	printf("\nNet value is=%.2lf", c1.net);
	
}
void storeCustomer2(customer* c2)
{
	c2->billno = 105;
	strcpy(c2->name, "Sachin");
	c2->total = 30000.75;
	c2->net = 29500.75;
	c2->discount = 500;
}
void displayCustomer2(customer* c2)
{
	printf("\nBill no. is=%d", c2->billno);
	printf("\nCustomer name is=%s", c2->name);
	printf("\nTotal is=%.2lf", c2->total);
	printf("\nDiscount is is=%d", c2->discount);
	printf("\nNet is=%.2lf", c2->net);
	
}