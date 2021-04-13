//with parameters without return
//choice menu

#include<stdio.h>
void choice(int,int,int);
void main()
{
	int x;
	int y;
	int z;
	printf("\nPress 1 for finding even/odd");
	printf("\nPress 2 for finding basic salary");
	printf("\nEnter your choice=");
	scanf("%d",&x);
	
	printf("\nEnter an integer=");
		scanf("%d",&y);
 	
	printf("\nenter basic salary=");
		scanf("%d",&z);
 choice(x,y,z);
}
void choice(int choice,int num,int basic)
{
	int total_salary,da,ta,hra;

	
	if(choice==1)
	{
		
		if(num%2==0)
			printf("%d is even",num);
		else
			printf("%d is odd",num);
	}
	
	else
	{
		
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
