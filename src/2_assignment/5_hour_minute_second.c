#include<stdio.h>
int time(int, int, int);
void main()
{
	int h, m, s, sec;

	printf("HH=");
	scanf("%d", &h);
	printf("MM=");
	scanf("%d", &m);
	printf("SS=");
	scanf("%d", &s);

	sec = time(h, m, s);

	printf("\nTime in seconds=%d", sec);
	printf("\n\n");
}
int time(int h,int m,int s)
{
	int sec;
	sec = s + (m * 60) + (3600 * h);
	return sec;
}