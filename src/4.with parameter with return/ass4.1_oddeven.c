//with parameters with return
//odd or even

#include<stdio.h>
char oddeven(int);
void main()
{
	int x;
	char r;
	printf("\nEnter an integer=");
	scanf("%d",& x);
	r=oddeven(x);
	if(r=='e')
	{
	printf("Even number");
	}
	else
	{
	printf("Odd number");
	}
}
char oddeven(int num)
{
	if(num%2==0)
	
	return 'e';
}


