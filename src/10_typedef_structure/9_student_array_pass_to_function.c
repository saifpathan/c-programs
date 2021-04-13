#include<stdio.h>
typedef struct student
{
	int roll_no;
	int marks;
}student;
void storemarks(student*, int);
void main()
{
	student arr[3];
	int i;
	storemarks(arr, 3);
	printf("\nMarks obtained by top 3 students=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\tRoll no.=%d Marks=%d", arr[i].roll_no, arr[i].marks);
	}
	printf("\n\n");
}
void storemarks(student*ptr, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("Enter roll no.=");
		scanf("%d", &ptr[i].roll_no);
		printf("Enter marks=");
		scanf("%d", &ptr[i].marks);
		printf("\n");	
	}
}
