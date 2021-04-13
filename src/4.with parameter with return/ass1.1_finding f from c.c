//with parameter with return
//finding f from c
#include<stdio.h>
float temp(float);
void main()
{
	float x;
	float ans;
	printf("\nEnter temperature in celsius=");
	scanf("%f",& x);
	ans=temp(x);
	printf("\nTemperature in fahrenheit is=%f",ans);
}
float temp(float celsius)
{
	float fahrenheit;
	
	
	
	fahrenheit=((celsius*9)/5)+32;

	return fahrenheit;
}
