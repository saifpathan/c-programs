#include<stdio.h>
typedef struct time
{
	int hh;
	int mm;
	int ss;
}time;
void storetime(time*, int);
void main()
{
	time arr[3];
	int i;
	storetime(arr, 3);
	printf("\nTime entered are=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\t%dhh:%dmm:%dss", arr[i].hh, arr[i].mm, arr[i].ss);
	}
	printf("\n\n\n");
}
void storetime(time*ptr,int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("Enter hours=");
		scanf("%d", &ptr[i].hh);
		printf("Enter minute=");
		scanf("%d", &ptr[i].mm);
		printf("Enter seconds=");
		scanf("%d", &ptr[i].ss);
		printf("\n");
		
	}
}
