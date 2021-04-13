#include<stdio.h>
#include<string.h>
typedef struct maharashtrapolice
{
	int id;
	char name[20];
	double salary;
	char posting[20];
}mp;
mp storeMp1(mp);
void displayMp1(mp);
void storeMp2(mp*);
void displayMp2(mp*);
void main()
{
	mp a1, a2;
	printf("\n\t\tMAHARASHTRA POLICE HEADQUARTERS");
	printf("\n\t\t       OFFICER DETAILS");
	a1 = storeMp1(a1);
	displayMp1(a1);
	printf("\n\n");

	storeMp2(&a2);
	displayMp2(&a2);
	printf("\n\n");
}
mp storeMp1(mp a1)
{
	a1.id = 86;
	strcpy(a1.name, "Vijay Patil");
	a1.salary = 45000.50;
	strcpy(a1.posting, "PUNE CRIME BRANCH");
	
	return a1;
}
void displayMp1(mp a1)
{
	printf("\nOfficer ID is=%d", a1.id);
	printf("\nOfficer name is=%s", a1.name);
	printf("\nSalary is=%.2lf", a1.salary);
	printf("\nPosting at=%s", a1.posting);

}
void storeMp2(mp* a2)
{
	a2->id = 105;
	strcpy(a2->name, "Tukaram Mane");
	a2->salary = 35000.75;
	strcpy(a2->posting, "NASHIK HEAD OFFICE");
	

}
void displayMp2(mp* a2)
{
	printf("\nOfficer ID is=%d", a2->id);
	printf("\nOfficer name is=%s", a2->name);
	printf("\nSalary is=%.2lf", a2->salary);
	printf("\nPosting at=%s", a2->posting);

}