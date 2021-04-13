#include<stdio.h>
typedef struct time
{
	int sec;
	int min;
	int hrs;
}time;
void additionTimePeriod(time, time, time*);
void main()
{
	time t1, t2, t3, add;
	printf("\nDisplay actual time=");
	printf("\nEnter hours,minutes and seconds=");
	scanf("%d%d%d", &t1.hrs, &t1.min, &t1.sec);

	printf("\nEnter 1st time to add=");
	printf("\nEnter hours,minutes and seconds=");
	scanf("%d%d%d", &t2.hrs, &t2.min, &t2.sec);

	printf("\nEnter 2nd time to add=");
	printf("\nEnter hours,minutes and seconds=");
	scanf("%d%d%d", &t3.hrs, &t3.min, &t3.sec);

	printf("\nEntered time by user=%dhh:%dmm:%dss\n", t1.hrs, t1.min, t1.sec);

	additionTimePeriod(t2, t3, &add);
	printf("\nTime addition=( %d:%d:%d )+", t2.hrs, t2.min, t2.sec);
	printf("( %d:%d:%d )", t3.hrs, t3.min, t3.sec);
	printf("= %d:%d:%d\n\n\n", add.hrs, add.min, add.sec);
}
void additionTimePeriod(time t2, time t3, time*add)
{
	add->sec = t2.sec + t3.sec;
	add->min = t2.min + t3.min;
	add->hrs = t2.hrs + t3.hrs;
	if (add->sec >= 60)
	{
		add->min++;
		add->sec -= 60;
	}
	if (add->min >= 60)
	{
		add->hrs++;
		add->min -= 60;
	}
}