#include<stdio.h>
typedef struct student
{
	int roll_no;
	char name[50];
}student;
void printvalue(student);
void main()
{
	student s1;
	s1.roll_no = 10;
	strcpy(s1.name, "Sachin");
	printvalue(s1);
}
void printvalue(student s2)
{
	printf("\n%d\t%s\n\n", s2.roll_no, s2.name);
}