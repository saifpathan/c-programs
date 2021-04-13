#include<stdio.h>
typedef struct student
{
	int roll_no;
	char name[50];
}student;
student storevalue(student);
void main()
{
	student s1;
	s1=storevalue(s1);
	printf("\n%d\t%s\n\n", s1.roll_no, s1.name);
}
student storevalue(student s2)
{
	s2.roll_no = 10;
	strcpy(s2.name, "Sachin");
	return s2;
	
}