#include<stdio.h>
void main()
{
	int rollno[5];
	int marks[5];
	int i;
	int choice;
	int max, min;

	for (i = 0; i < 5; i++)
	{
		printf("\nEnter roll no. of 5 toppers=");
		scanf("%d", &rollno[i]);

		printf("Enter marks of student=");
		scanf("%d", &marks[i]);
	}

	printf("\nPress 1 for all data");
	printf("\nPress 2 for 1st topper");
	printf("\nPress 3 for 5th topper");
	printf("\n\nYour Choice=");
	scanf("%d", &choice);

	if (choice == 1)
	{
		for (i = 0; i < 5; i++)
		{
			printf("\nRoll no.:%d \tMarks:%d", rollno[i], marks[i]);
			printf("\n\n");
		}
	}
	if (choice == 2)
	{
		max= marks[0];
		
		for (i = 0; i < 5; i++)
		{
			if (marks[i]> max)
			{
				max = marks[i];	
				
			}
		}
			printf("\n1st topper=Roll no.:%d \tMarks :%d", rollno[i], max);
			printf("\n\n");
		
	}
	if (choice == 3)
	{
		min = marks[0];

		for (i = 0; i < 5; i++)
		{
			if (marks[i] < min)
			{
				min = marks[i];
			}
		}
		printf("\n5th topper=Roll no.:%d \tMarks :%d", rollno[i], min);
		printf("\n\n");
	}
	
}