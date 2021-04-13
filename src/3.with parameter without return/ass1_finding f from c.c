//finding f from c
//with parameter without return type
#include<stdio.h>
void temp(float);                                   
void main()                               
{
	float x;
	printf("\nEnter temperature in celsius=");
	scanf("%f",& x);
	temp(x);
	
}
void temp(float celsius)
{
	float fahrenheit;
	
	fahrenheit=((celsius*9)/5)+32;
	
	printf("\nTemperature in fahrenheit is=%f",fahrenheit);
	printf("\n\n");
}
