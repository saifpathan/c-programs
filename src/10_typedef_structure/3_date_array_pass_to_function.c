#include<stdio.h>
typedef struct date
{
	int day;
	int month;
	int year;
}date;
void storedate(date*, int);
void main()
{
	date arr[3];
	int i;
	storedate(arr, 3);
	printf("\nDates entered are=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\t%d/%d/%d", arr[i].day, arr[i].month, arr[i].year);
	}
	printf("\n\n\n\n");
}
void storedate(date*ptr,int size)
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		printf("Enter day=");
		scanf("%d", &ptr[i].day);
		printf("Enter month=");
		scanf("%d", &ptr[i].month);
		printf("Enter year=");
		scanf("%d", &ptr[i].year);
		printf("\n");
	}
	
}
