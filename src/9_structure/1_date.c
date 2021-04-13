#include<stdio.h>
struct date
{
	int day;
	int month;
	int year;
};
struct date storedate(struct date);
void printdate(struct date);
void main()
{
	struct date d1;
	d1 = storedate(d1);
	printdate(d1);
}
struct date storedate(struct date t1)
{
	printf("Enter day=");
	scanf("%d", &t1.day);
	printf("Enter month=");
	scanf("%d", &t1.month);
	printf("Enter year=");
	scanf("%d", &t1.year);
	return t1;
}
void printdate(struct date t1)
{
	printf("\nDate=%d:%d:%d", t1.day, t1.month, t1.year);
	printf("\n\n");
}
