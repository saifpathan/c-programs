#include<stdio.h>
struct student
{
	int roll_no;
	double marks;
};
struct student storestudent(struct student);
void printstudent(struct student);
void main()
{
	struct student s1;
	s1 = storestudent(s1);
	printstudent(s1);
}
struct student storestudent(struct student t1)
{
	printf("Enter roll no.=");
	scanf("%d", &t1.roll_no);
	printf("Enter marks=");
	scanf("%lf", &t1.marks);
	
	return t1;
}
void printstudent(struct student t1)
{
	printf("\nRoll no.=%d", t1.roll_no);
	printf("\nMarks=%.2lf", t1.marks);
	printf("\n\n");
}
