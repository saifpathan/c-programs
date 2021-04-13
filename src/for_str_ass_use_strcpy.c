#include<stdio.h>
typedef struct student
{
	int roll_no;
	char name[20];
}student;
void main()
{
	student s1;
	s1.roll_no = 10;
	strcpy(s1.name, "Sachin");
	printf("ROLL NO. & NAME OF STUDENT IS=\t%d\t%s", s1.roll_no, s1.name);
	printf("\n\n");
}