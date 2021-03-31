#include<stdio.h>
void main()
{
	int num;
	int q;
	int r;
	int ans;
    
    printf("\nenter the 2 digit number=");
    scanf("%d",& num);
    
    q=num/10;
    r=num%10;
    ans=r+q;
    printf("\nsum of digits is=%d",ans);
    printf("\n\n");
}
