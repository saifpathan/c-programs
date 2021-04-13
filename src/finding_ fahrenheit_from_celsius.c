#include<stdio.h>
void main()
{
	float fahrenheit,celsius;
	
	printf("\nEnter temperature in celsius=");
	scanf("%f",& celsius);
	
	fahrenheit=((celsius*9)/5)+32;
	
	printf("\nTemperature in fahrenheit is=%f",fahrenheit);
	printf("\n\n");
}
