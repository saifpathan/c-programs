//without parameters without return
//odd or even

#include<stdio.h>
void oddeven();
void main()
{
	oddeven();
}
void oddeven()
{
	int num;
	printf("\nEnter an integer=");
	scanf("%d",& num);
	if(num%2==0)
		printf("%d is even",num);
	else
		printf("%d is odd",num);
}


