//with parameters with return
//choice menu

#include<stdio.h>
int choice(int);
void main()
{
	int x;
	printf("\nPress 1 for finding even/odd");
	printf("\nPress 2 for finding basic salary");
	printf("\nEnter your choice=");
	scanf("%d",&x);
	int y=choice(x);
	printf("\n%d",y);
}
int choice(int choice)
{
	int num;
	int total_salary,basic,da,ta,hra;

	
	if(choice==1)
	{
		printf("\nEnter an integer=");
		scanf("%d",&num);
		if(num%2==0)
			printf("%d is even",num);
		else
			printf("%d is odd",num);
	}
	
	else
	{
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
		printf("\nTotal salary is=%d",total_salary);
		printf("\n\n");
	}
}
