#include<stdio.h>
float meter_conv(float);
float cm_conv(float);
void main()
{
	float feet, inches, m, cm;
	printf("\nEnter distance in feet=");
	scanf("%f", &feet);

	m = meter_conv(feet);
	printf("\nConversion feet to metter is=%f",m);
	printf("\n\n");

	printf("\nEnter distance in inches=");
	scanf("%f", &inches);

	cm = cm_conv(inches);
	printf("\nConversion inches to centimeter is=%f",cm);
	printf("\n");
	
}
float meter_conv(float feet)
{
	float meter = 0.3048*feet;
	return meter;
}
float cm_conv(float inches)
{
	float centimeter = 2.54*inches;
	return centimeter;
}
