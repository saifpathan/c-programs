//with parameters without return
//odd or even

#include<stdio.h>
void oddeven(int);
void main()
{
	int x;
	printf("\nEnter an integer=");
	scanf("%d",& x);
	oddeven(x);
}
void oddeven(int num)
{
	
	if(num%2==0)
		printf("%d is even",num);
	else
		printf("%d is odd",num);
}


