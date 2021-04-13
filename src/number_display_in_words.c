#include<stdio.h>
void main()
{
	int num,r,r1,p=0;
	printf("\nEnter the number=");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		p=p*10+r;
		num=num/10;
	}
	while(p!=0)
	{
		r1=p%10;
			if(r1==0)
			printf("Zero");
			if(r1==1)
			printf("One");
			if(r1==2)
			printf("Two");
			if(r1==3)
			printf("Three");
		 	if(r1==4)
			printf("Four");
		 	if(r1==5)
			printf("Five");
		 	if(r1==6)
			printf("Six");
		 	if(r1==7)
			printf("Seven");
		 	if(r1==8)
			printf("Eight");
		 	if(r1==9)
			printf("Nine");
			
			p=p/10;
					
	}	
}
