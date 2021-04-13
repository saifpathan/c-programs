#include<stdio.h>
#include<string.h>
typedef struct scoreboard
{
	int t1, t2, r1, r2;
	char tn1[20], tn2[20], p1[20], p2[20];

}sb;
sb storeRuns1(sb);
void displayRuns1(sb);
void storeRuns2(sb*);
void displayRuns2(sb*);
void main()
{
	sb s1, s2;
	printf("\n\t\tWORLD CUP 2020");
	printf("\n\t\t  SUMMARY");
	s1 = storeRuns1(s1);
	displayRuns1(s1);
	printf("\n\n");

	storeRuns2(&s2);
	displayRuns2(&s2);
	printf("\n\n");
}
sb storeRuns1(sb s1)
{
	s1.t1 = 360;
	s1.r1 = 96;
	strcpy(s1.p1, "ROHIT SHARMA");
	strcpy(s1.tn1, "INDIA");
	return s1;
}
void displayRuns1(sb s1)
{
	printf("\nTeam name=%s", s1.tn1);
	printf("\nTotal runs scored by team are=%d", s1.t1);
	printf("\nName of highest runscorer is=%s", s1.p1);
	printf("\nRuns scored=%d", s1.r1);


}
void storeRuns2(sb* s2)
{
	s2->t2 = 345;
	s2->r2 = 88;
	strcpy(s2->p2, "STEVE SMITH");
	strcpy(s2->tn2, "AUSTRALIA");

}
void displayRuns2(sb* s2)
{
	printf("\nTeam name=%s", s2->tn2);
	printf("\nTotal runs scored by team are=%d", s2->t2);
	printf("\nName of highest runscorer is=%s", s2->p2);
	printf("\nRuns scored=%d", s2->r2);

}