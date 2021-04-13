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
	time*ptr;
	ptr = arr;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("Enter hours=");
		scanf("%d", &ptr[i].hh);
		printf("Enter minute=");
		scanf("%d", &ptr[i].mm);
		printf("Enter seconds=");
		scanf("%d", &ptr[i].ss);
		printf("\n");
	}
	printf("\nTime entered are=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\t%dhh:%dmm:%dss", ptr[i].hh, ptr[i].mm, ptr[i].ss);
	}
	printf("\n\n");
}
