#include<stdio.h>
//#include<string.h>
typedef struct dobt
{
	int date, month, year;
	char day[9];
}dob;
void main()
{
	dob d1;
	printf("\t%d", sizeof(d1.date));
	printf("\t%d", sizeof(d1.month));
	printf("\t%d", sizeof(d1.year));
	printf("\t%d", sizeof(d1.day));
	printf("\t%d", sizeof(d1));
	printf("\n\n\n");
}