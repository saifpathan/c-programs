#include<stdio.h>
typedef struct student
{
	int roll_no;
	int marks;
}student;
void main()
{
	student arr[3];
	student*ptr;
	ptr = arr;
	int i;
	for (i = 0; i < 3; i++)
	{
		printf("Enter roll no.=");
		scanf("%d", &ptr[i].roll_no);
		printf("Enter marks=");
		scanf("%d", &ptr[i].marks);
		printf("\n");
	}
	printf("\nMarks obtained by top 3 students=");
	for (i = 0; i < 3; i++)
	{
		printf("\n\t\t\tRoll no.=%d Marks=%d", ptr[i].roll_no, ptr[i].marks);
	}
	printf("\n\n");
}
