#include<stdio.h>
int reverse(int);
void main()
{
	int num, rev = 0;
	printf("\nEnter 3 digit no.=");
	scanf("%d", &num);
	rev = reverse(num);
	printf("\nReverse of 3 digit no. is=%d", rev);
	printf("\n\n");
}
int reverse(int num)
{
	int a, r, rev = 0;
	a = num;
	while (a != 0)
	{
		r = a % 10;
		a = a / 10;
		rev = rev * 10 + r;
	}
	return rev;
}