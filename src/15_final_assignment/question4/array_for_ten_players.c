#include<stdio.h>
typedef struct cricketer
{
	int nmp, runs, wt;
	char name[50];

}player;
void storeInfo(player*,int);
void displayInfo(player*,int);
void maxRun(player*, int);
void maxWickets(player*, int);
void main()
{
	player p[10];
	storeInfo(&p,10);
	displayInfo(&p,10);
	maxRun(&p,10);
	maxWickets(&p,10);

}
void storeInfo(player*p,int size)
{
	int i;

	printf("\nEnter the player info=");

	for (i = 0; i < 10; i++)
	{
		printf("\nName=");
		scanf("%s", &p[i].name);
		printf("No. of matches played=");
		scanf("%d", &p[i].nmp);
		printf("No. of runs scored=");
		scanf("%d", &p[i].runs);
		printf("No. of wickets taken=");
		scanf("%d", &p[i].wt);
		printf("\n");

	}
}
void displayInfo(player* p,int size)
{
	int i;
	printf("\nNAME\tNO. OF MATCHES PLAYED\tRUNS SCORED\tWICKETS TAKEN");
	for (i = 0; i < 10; i++)
	{
		printf("\n%s\t\t%d\t\t    %d\t\t      %d", p[i].name, p[i].nmp, p[i].runs, p[i].wt);
	}
	printf("\n\n");
}
void maxRun(player* p, int size)
{
	int i, max;
	max = p[0].runs;
	for (i = 0; i < 10; i++)
	{
		if (max < p[i].runs)
		{
			max = p[i].runs;
		}
	}
	printf("\n\nMaximum runs are=%d", max);
	for (i = 0; i < size; i++)
	{
		if (max == p[i].runs)
		{
			printf("\nPlayer who made maximum runs=%s", p[i].name);
		}
	}
}
void maxWickets(player* p, int size)
{
	int i, max;
	max = p[0].wt;
	for (i = 0; i < 10; i++)
	{
		if (max < p[i].wt)
		{
			max = p[i].wt;
		}
	}
	printf("\n\nMaximum wickets are=%d", max);
	for (i = 0; i < size; i++)
	{
		if (max == p[i].wt)
		{
			printf("\nPlayer who has taken maximum wickets=%s\n\n", p[i].name);
		}
	}
}
