#include<stdio.h>
#include<string.h>
typedef struct marks
{
	int p, c, m;
	char name[20];

}marks;
marks storeMarks1(marks);
void displayMarks1(marks);
void storeMarks2(marks*);
void displayMarks2(marks*);
void main()
{
	marks s1, s2;
	printf("\n\t\tOREON HIGH SCHOOL");
	printf("\n\t\t    PCM MARKS");
	s1 = storeMarks1(s1);
	displayMarks1(s1);
	printf("\n\n");

	storeMarks2(&s2);
	displayMarks2(&s2);
	printf("\n\n");
}
marks storeMarks1(marks s1)
{
	s1.p = 80;
	s1.c = 86;
	s1.m = 95;
	strcpy(s1.name, "Saif");
	return s1;
}
void displayMarks1(marks s1)
{
	printf("\nName of student is=%s", s1.name);
	printf("\nPhysics marks are=%d", s1.p);
	printf("\nChemistry marks are=%d", s1.c);
	printf("\nMaths are=%d", s1.m);
	

}
void storeMarks2(marks* s2)
{
	s2->p = 85;
	s2->c = 88;
	s2->m = 90;
	strcpy(s2->name, "Rohit");

}
void displayMarks2(marks* s2)
{
	printf("\nName of student is=%s", s2->name);
	printf("\nPhysics marks are=%d", s2->p);
	printf("\nChemistry marks are=%d", s2->c);
	printf("\nMaths marks are=%d", s2->m);

}