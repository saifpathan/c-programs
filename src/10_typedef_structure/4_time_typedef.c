#include<stdio.h>
typedef struct time
{
	int hh;
	int mm;
	int ss;
}time;
void main()
{
	time arr[3];
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("Enter hours=");
		scanf("%d", &arr[i].hh);
		printf("Enter minute=");
		scanf("%d", &arr[i].mm);
		printf("Enter seconds=");
		scanf("%d", &arr[i].ss);
		printf("\n");
	}
	printf("\nTime entered are=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\t%dhh:%dmm:%dss", arr[i].hh, arr[i].mm, arr[i].ss);
	}
	printf("\n\n");
}
