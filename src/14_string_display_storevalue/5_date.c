#include<stdio.h>
#include<string.h>
typedef struct date
{
	int day,month,year;
	char dayofweek[20];
	
}date;
date storeDate1(date);
void displayDate1(date);
void storeDate2(date*);
void displayDate2(date*);
void main()
{
	date d1, d2;
	printf("\n\t\tCALENDAR");
	d1 = storeDate1(d1);
	displayDate1(d1);
	printf("\n\n");

	storeDate2(&d2);
	displayDate2(&d2);
	printf("\n\n");
}
date storeDate1(date d1)
{
	d1.day = 10;
	d1.month = 06;
	d1.year = 1995;
	strcpy(d1.dayofweek, "Saturday");
	return d1;
}
void displayDate1(date d1)
{
	printf("\nDay is=%d", d1.day);
	printf("\nMonth is=%d", d1.month);
	printf("\nYear is=%d", d1.year);
	printf("\nDay of week is=%s", d1.dayofweek);

}
void storeDate2(date* d2)
{
	d2->day = 25;
	d2->month = 8;
	d2->year = 2000;
	strcpy(d2->dayofweek, "Friday");

}
void displayDate2(date* d2)
{
	printf("\nDay is=%d", d2->day);
	printf("\nMonth is=%d", d2->month);
	printf("\nYear is=%d", d2->year);
	printf("\nDay of week is=%s", d2->dayofweek);

}