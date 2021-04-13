//without parameter with return
//basic salary


#include<stdio.h>
int total_salary();
void main()
{
	int x;
	x=total_salary();
	printf("\nTotal salary is=%d",x);
}
int total_salary()
{
	int total_salary;
	int basic,da,ta,hra;
	
	printf("\nEnter basic salary=");
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
