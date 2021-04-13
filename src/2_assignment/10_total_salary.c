#include<stdio.h>
int totalsalary(int);
void main()
{
	int basic, total;
	printf("\nEnter basic salary=");
	scanf("%d", &basic);

	total = totalsalary(basic);
	printf("\nTotal salary=%d",total);
	printf("\n\n");

}
int totalsalary(int basic)
{
	int total, da, ta, hra;
	da = basic * 10 / 100;
	printf("\nda is=%d", da);

	ta = basic * 12 / 100;
	printf("\nta is=%d", ta);

	hra = basic * 15 / 100;
	printf("\nhra is=%d", hra);

	total = basic + da + ta + hra;
	return total;
}