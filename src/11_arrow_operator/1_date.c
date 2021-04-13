#include<stdio.h>
typedef struct date
{
	int day;
	int month;
	int year;
}date;
void storeDate(date*);
void printDate(date*);
void main()
{
	date d1;
	storeDate(&d1);
	printDate(&d1);
	printf("\n\n");
}
void storeDate(date*ptr)
{
	printf("Enter day=");
	scanf("%d", &ptr->day);
	printf("Enter month=");
	scanf("%d", &ptr->month);
	printf("Enter year=");
	scanf("%d", &ptr->year);
}
void printDate(date*ptr)
{
	printf("\nDate=%d:%d:%d", ptr->day,ptr->month,ptr->year);
	printf("\n\n");
}
