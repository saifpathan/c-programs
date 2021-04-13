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
	date*ptr;
	ptr = arr;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("Enter day=");
		scanf("%d", &ptr[i].day);
		printf("Enter month=");
		scanf("%d", &ptr[i].month);
		printf("Enter year=");
		scanf("%d", &ptr[i].year);
		printf("\n");
	}
	printf("\nDates entered are=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\t%d/%d/%d", ptr[i].day, ptr[i].month, ptr[i].year);
	}
	printf("\n\n");
}
