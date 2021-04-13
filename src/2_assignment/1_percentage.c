#include<stdio.h>
float percentage(float, float, float, float, float);
void main()
{
	float a,b,c,d,e,per;

	printf("Enter marks of 'a'subject=");
	scanf("%f", &a);
	printf("Enter marks of 'b'subject=");
	scanf("%f", &b);
	printf("Enter marks of 'c'subject=");
	scanf("%f", &c);
	printf("Enter marks of 'd'subject=");
	scanf("%f", &d);
	printf("Enter marks of 'e'subject=");
	scanf("%f", &e);

	
	per = percentage(a, b, c, d, e);
	printf("Percentage of student is=%f", per);
	printf("\n\n");
}
float percentage(float a,float b,float c,float d,float e)
{
	float total, per;
	total = a + b + c + d + e;
	per = (total / 500.0) * 100;
	return per;
}