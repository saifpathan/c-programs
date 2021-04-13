#include<stdio.h>
int sumdigit(int);
void main()
{
	int num, sum = 0;
	printf("\nEnter 3 digit no.=");
	scanf("%d", &num);

	sum = sumdigit(num);
	printf("\nSum of 3 digit of given number is=%d", sum);
	printf("\n\n");
}
int sumdigit(int num)
{
	int a, sum = 0, r;
	a = num;
	while (a != 0)
	{
		r = a % 10;
		sum = sum + r;
		a = a / 10;

	}
	return sum;
}