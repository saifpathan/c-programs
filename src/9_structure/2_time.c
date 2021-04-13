#include<stdio.h>
struct time
{
	int hh;
	int mm;
	int ss;
};
struct time storetime(struct time);
void printtime(struct time);
void main()
{
	struct time t1;
	t1 = storetime(t1);
	printtime(t1);
}
struct time storetime(struct time d1)
{
	printf("Enter hours=");
	scanf("%d", &d1.hh);
	printf("Enter minutes=");
	scanf("%d", &d1.mm);
	printf("Enter seconds=");
	scanf("%d", &d1.ss);
	return d1;
}
void printtime(struct time t1)
{
	printf("\nTime=%dhh:%dmm:%dss", t1.hh, t1.mm, t1.ss);
	printf("\n\n");
}
