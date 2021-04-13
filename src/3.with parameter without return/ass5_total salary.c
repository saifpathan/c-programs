//with parameter without return
//basic salary


#include<stdio.h>
void total_salary(int);
void main()
{
	int x;
	printf("\nEnter basic salary=");
	scanf("%d",&x);
	total_salary(x);
}
void total_salary(int basic)
{
	int total_salary;
	int da,ta,hra;
	
	
	
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
