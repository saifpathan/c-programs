//without parameters with return
//choice menu

#include<stdio.h>
int choice();
char oddeven();
int total_salary();
void main()
{
	int x;
	int y;
	int z;
	z=choice();
	printf("\nEnter your choice=%d",&z);
	
	x=oddeven();
	if(x=='e')
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
	y=total_salary();
	printf("\nTotal salary is=%d",y);
	choice();
}
int choice()
{
	int choice,num;
	
	printf("\nPress 1 for finding even/odd");
	printf("\nPress 2 for finding basic salary");
	
	if (choice==1)
		oddeven;
	else
		total_salary;
	return choice;
}
char oddeven()
	{
		int num;
		printf("\nEnter an integer=");
		scanf("%d",&num);
		if(num%2==0)
			return'e';
	}
int total_salary()
	{
		int total_salary,basic,da,ta,hra;
		printf("\nenter basic salary=");
		scanf("%d",&basic);
		if(basic<=5000)
		{
			da=(10*basic)/100;
			ta=(20*basic)/100;
			hra=(25*basic)/100;
		}
		else
		{
			da=(15*basic)/100;
			ta=(25*basic)/100;
			hra=(30*basic)/100;		
		}
		total_salary=basic+da+ta+hra;
		return total_salary;
	}

