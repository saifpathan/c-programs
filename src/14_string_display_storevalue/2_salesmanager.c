#include<stdio.h>
#include<string.h>
typedef struct salesmanager
{
	int id;
	char name[20];
	double salary;
	double incentive;
	int target;
}sm;
sm storeSm1(sm);
void displaySm1(sm);
void storeSm2(sm*);
void displaySm2(sm*);
void main()
{
	sm s1, s2;
	printf("\n\t\tVIDEOCON SERVICES");
	printf("\n\t\t   SALESMANAGER LIST");
	s1 = storeSm1(s1);
	displaySm1(s1);
	printf("\n\n");

	storeSm2(&s2);
	displaySm2(&s2);
	printf("\n\n");
}
sm storeSm1(sm s1)
{
	s1.id = 100;
	strcpy(s1.name, "Saif");
	s1.salary = 25000.50;
	s1.incentive = 5000.60;
	s1.target = 30;
	return s1;
}
void displaySm1(sm s1)
{
	printf("\nSalesmanager id is=%d", s1.id);
	printf("\nsalesmanager name is=%s", s1.name);
	printf("\nSalesmanager salary is=%.2lf", s1.salary);
	printf("\nSalesmanager incentive is=%.2lf", s1.incentive);
	printf("\nSalesmanager target is is=%d", s1.target);
}
void storeSm2(sm* s2)
{
	s2->id = 105;
	strcpy(s2->name, "Sachin");
	s2->salary = 30000.75;
	s2->incentive = 7500.75;
	s2->target = 40;
}
void displaySm2(sm* s2)
{
	printf("\nSalesmanager id is=%d", s2->id);
	printf("\nsalesmanager name is=%s", s2->name);
	printf("\nSalesmanager salary is=%.2lf", s2->salary);
	printf("\nSalesmanager incentive is=%.2lf", s2->incentive);
	printf("\nSalesmanager target is is=%d", s2->target);
}