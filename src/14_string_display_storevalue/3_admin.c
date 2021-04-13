#include<stdio.h>
#include<string.h>
typedef struct admin
{
	int id;
	char name[20];
	double salary;
	double allowance;
}admin;
admin storeAdmin1(admin);
void displayAdmin1(admin);
void storeAdmin2(admin*);
void displayAdmin2(admin*);
void main()
{
	admin a1, a2;
	printf("\n\t\tRAJ GROUP OF INDUSTRIES");
	printf("\n\t\t   ADMIN DETAILS");
	a1 = storeAdmin1(a1);
	displayAdmin1(a1);
	printf("\n\n");

	storeAdmin2(&a2);
	displayAdmin2(&a2);
	printf("\n\n");
}
admin storeAdmin1(admin a1)
{
	a1.id = 100;
	strcpy(a1.name, "Saif");
	a1.salary = 25000.50;
	a1.allowance = 5000.60;
	return a1;
}
void displayAdmin1(admin a1)
{
	printf("\nAdmin id is=%d", a1.id);
	printf("\nAdmin name is=%s", a1.name);
	printf("\nAdmin salary is=%.2lf", a1.salary);
	printf("\nAdmin allowance is=%.2lf", a1.allowance);
	
}
void storeAdmin2(admin* a2)
{
	a2->id = 105;
	strcpy(a2->name, "Sachin");
	a2->salary = 30000.75;
	a2->allowance = 7500.75;
	
}
void displayAdmin2(admin* a2)
{
	printf("\nAdmin id is=%d", a2->id);
	printf("\nAdmin name is=%s", a2->name);
	printf("\nAdmin salary is=%.2lf", a2->salary);
	printf("\nAdmin allowance is=%.2lf", a2->allowance);
	
}