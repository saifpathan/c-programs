//without parameters with return
//odd or even

#include<stdio.h>
char oddeven();
void main()
{
	int r;
	r=oddeven();
	if(r=='e')
	{
		printf("Even number");
	}
	else
	{
		printf("Odd number");
	}
}
char oddeven()
{
	int num;
	printf("\nEnter an integer=");
	scanf("%d",& num);
	if(num%2==0)
	
	return 'e';
}


