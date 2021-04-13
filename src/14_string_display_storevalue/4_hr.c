#include<stdio.h>
#include<string.h>
typedef struct hr
{
	int id;
	char name[20];
	double salary;
	double comission;
}hr;
hr storeHr1(hr);
void displayHr1(hr);
void storeHr2(hr*);
void displayHr2(hr*);
void main()
{
	hr h1, h2;
	printf("\n\t\tD & S PVT LTD");
	printf("\n\t\t HR DETAILS");
	h1 = storeHr1(h1);
	displayHr1(h1);
	printf("\n\n");

	storeHr2(&h2);
	displayHr2(&h2);
	printf("\n\n");
}
hr storeHr1(hr h1)
{
	h1.id = 100;
	strcpy(h1.name, "Saif");
	h1.salary = 25000.50;
	h1.comission = 5000.60;
	return h1;
}
void displayHr1(hr h1)
{
	printf("\nHR id is=%d", h1.id);
	printf("\nHR name is=%s", h1.name);
	printf("\nHR salary is=%.2lf", h1.salary);
	printf("\nHR commission is=%.2lf", h1.comission);

}
void storeHr2(hr* h2)
{
	h2->id = 105;
	strcpy(h2->name, "Sachin");
	h2->salary = 30000.75;
	h2->comission = 7500.75;

}
void displayHr2(hr* h2)
{
	printf("\nHR id is=%d", h2->id);
	printf("\nHR name is=%s", h2->name);
	printf("\nHR salary is=%.2lf", h2->salary);
	printf("\nHR commission is=%.2lf", h2->comission);

}