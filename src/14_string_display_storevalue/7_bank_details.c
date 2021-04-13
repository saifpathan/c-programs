#include<stdio.h>
#include<string.h>
typedef struct bankdetails
{
	int an;
	char name[20];
	double deposit;
}bank;
bank storeBank1(bank);
void displayBank1(bank);
void storeBank2(bank*);
void displayBank2(bank*);
void main()
{
	bank b1, b2;
	printf("\n\t\tSTATE BANK OF INDIA");
	printf("\n\t\t  BANK DETAILS");
	b1 = storeBank1(b1);
	displayBank1(b1);
	printf("\n\n");

	storeBank2(&b2);
	displayBank2(&b2);
	printf("\n\n");
}
bank storeBank1(bank b1)
{
	b1.an = 61782536100;
	strcpy(b1.name, "Saif");
	b1.deposit = 75000.50;
	return b1;
}
void displayBank1(bank b1)
{
	printf("\nAccount no.is=%d", b1.an);
	printf("\nAccount Holder Name is=%s", b1.name);
	printf("\nDeposit Amount is=%.2lf", b1.deposit);
}
void storeBank2(bank* b2)
{
	b2->an = 61842345105;
	strcpy(b2->name, "Sachin");
	b2->deposit = 50000.75;
}
void displayBank2(bank* b2)
{
	printf("\nAccount no. is=%d", b2->an);
	printf("\nAccount Holder name is=%s", b2->name);
	printf("\nDeposit Amount is=%.2lf", b2->deposit);
}