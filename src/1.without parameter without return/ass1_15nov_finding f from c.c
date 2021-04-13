//finding f from c
//without parameter without return type
#include<stdio.h>
void temp();                                   
void main()                               
{
	temp();
}
void temp()
{
	float fahrenheit,celsius;
	
	printf("\nEnter temperature in celsius=");
	scanf("%f",& celsius);
	
	fahrenheit=((celsius*9)/5)+32;
	
	printf("\nTemperature in fahrenheit is=%f",fahrenheit);
	printf("\n\n");
}
