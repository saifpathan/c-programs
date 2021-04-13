#include<stdio.h>
typedef struct student
{
	int roll_no;
	char name[50];
}student;
void mystore(student*);
void main()
{
	student s1;
	mystore(&s1);
	
}
void mystore(student* ptr)
{
	ptr->roll_no = 10;
	strcpy(ptr->name, "Sachin");
	printf("\n%d\t%s\n\n", ptr->roll_no,ptr->name);

}