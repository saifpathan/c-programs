#include<stdio.h>
typedef struct student
{
	int roll_no;
	double marks;
}student;
void storeStudent(student*);
void printStudent(student*);
void main()
{
	student s1;
	storeStudent(&s1);
	printStudent(&s1);
	printf("\n\n");
}
void storeStudent(student*ptr)
{
	printf("Enter roll no.=");
	scanf("%d", &ptr->roll_no);
	printf("Enter marks=");
	scanf("%lf", &ptr->marks);
}
void printStudent(student*ptr)
{
	printf("\nRoll no.=%d",ptr->roll_no);
	printf("\nMarks=%.2lf",ptr->marks);
}
