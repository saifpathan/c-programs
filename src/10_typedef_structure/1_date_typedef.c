#include<stdio.h>
typedef struct date
{
	int day;
	int month;
	int year;
}date;
void main()
{
	date arr[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("Enter day=");
		scanf("%d", &arr[i].day);
		printf("Enter month=");
		scanf("%d", &arr[i].month);
		printf("Enter year=");
		scanf("%d", &arr[i].year);
		printf("\n");
	}
	printf("\nDates entered are=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\t%d/%d/%d", arr[i].day, arr[i].month, arr[i].year);
	}
	printf("\n\n");
}
