#include<stdio.h>
#include<string.h>
typedef struct employee
{
	int id;
	char name[20];
	double salary;
}employee;
employee storeEmp1(employee);
void displayEmp1(employee);
void storeEmp2(employee*);
void displayEmp2(employee*);
void main()
{
	employee e1, e2;
	printf("\n\t\tINFOTECH IT SERVICES");
	printf("\n\t\t   EMLOYEE DETAILS");
	e1 = storeEmp1(e1);
	displayEmp1(e1);
	printf("\n\n");

	storeEmp2(&e2);
	displayEmp2(&e2);
	printf("\n\n");
}
employee storeEmp1(employee e1)
{
	e1.id = 100;
	strcpy(e1.name, "Saif");
	e1.salary = 25000.50;
	return e1;
}
void displayEmp1(employee e1)
{
	printf("\nEmployee id is=%d",e1.id);
	printf("\nEmployee name is=%s", e1.name);
	printf("\nEmployee salary is=%.2lf", e1.salary);
}
void storeEmp2(employee* e2)
{
	e2->id = 105;
	strcpy(e2->name, "Sachin");
	e2->salary = 30000.75;
}
void displayEmp2(employee* e2)
{
	printf("\nEmployee id is=%d", e2->id);
	printf("\nEmployee name is=%s", e2->name);
	printf("\nEmployee salary is=%.2lf", e2->salary);
}