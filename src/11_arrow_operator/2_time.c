#include<stdio.h>
typedef struct time
{
	int hh;
	int mm;
	int ss;
}time;
void storeTime(time*);
void printTime(time*);
void main()
{
	time t1;
	storeTime(&t1);
	printTime(&t1);
	printf("\n\n");
}
void storeTime(time*ptr)
{
	printf("Enter hours=");
	scanf("%d", &ptr->hh);
	printf("Enter minutes=");
	scanf("%d", &ptr->mm);
	printf("Enter seconds=");
	scanf("%d", &ptr->ss);
	
}
void printTime(time*ptr)
{
	printf("\nTime=%dhh:%dmm:%dss", ptr->hh,ptr->mm,ptr->ss);
	printf("\n\n");
}
