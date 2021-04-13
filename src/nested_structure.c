#include<stdio.h>
#include<string.h>
typedef struct date
{
	int day, month, year;
}date;

typedef struct employee
{
	int id;
	char name[50];
	double sal;
	date dob;
	date doj;
}emp;

typedef struct salesmanager
{
	emp e1;
	int target;
	double incentive;
}sm;

void main()
{
	sm s1;
	s1.e1.id = 10;
	strcpy(s1.e1.name,"Sachin");
	s1.e1.sal = 35000.75;
	s1.e1.dob.day = 24;
	s1.e1.dob.month = 4;
	s1.e1.dob.year = 1973;
	s1.e1.doj.day = 11;
	s1.e1.doj.month = 6;
	s1.e1.doj.year = 1995;
	s1.incentive = 5000.25;
	s1.target = 20;

	printf("\n\t\tRAJ INDUSTRIES");
	printf("\nDetails of salesmanager=");
	printf("\n\nI.D.=%d", s1.e1.id);
	printf("\nNAME=%s", s1.e1.name);
	printf("\nSALARY=%lf", s1.e1.sal);
	printf("\nDATE OF BIRTH=%d/%d/%d", s1.e1.dob.day, s1.e1.dob.month, s1.e1.dob.year);
	printf("\nDATE OF JOINING=%d/%d/%d", s1.e1.doj.day, s1.e1.doj.month, s1.e1.doj.year);
	printf("\nINCENTIVE=%lf", s1.incentive);
	printf("\nTARGET=%d", s1.target);
	printf("\n\n");

}