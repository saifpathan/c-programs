#include<stdio.h>
#include<string.h>
void main()
{
	char p[50];
	char q[50];
	printf("\nEnter 1st string=");
	gets(p);
	printf("\nEnter 2nd string=");
	gets(q);

	if (strlen(p) != strlen(q))
	{
		printf("\nFALSE\n\n");
	}
	else
	{
		strcat(p, p);

		if (strstr(p, q) != '\0')
		{
			printf("\nTRUE\n\n");
		}
		else
		{
			printf("\nFALSE\n\n");
		}
	}
	printf("\n\n");
}