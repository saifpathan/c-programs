//without parameter with return
//finding f from c
#include<stdio.h>
float temp();
void main()
{
	float ans;
	ans=temp();
	printf("\nTemperature in fahrenheit is=%f",ans);
}
float temp()
{
	float fahrenheit,celsius;
	
	printf("\nEnter temperature in celsius=");
	scanf("%f",& celsius);
	
	fahrenheit=((celsius*9)/5)+32;

	return fahrenheit;
}
