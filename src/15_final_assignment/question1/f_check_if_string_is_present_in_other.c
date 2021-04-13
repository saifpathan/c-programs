#include<stdio.h>
void main()
{
	char s[100];
	char t[100];
	int count1 = 0;
	int count2 = 0;
	int i, j, flag;

	printf("\nEnter 1st string=");
	gets(s);
	printf("\nEnter 2nd string=");
	gets(t);

	while (s[count1] != '\0')
		count1++;
	while (t[count2] != '\0')
		count2++;
	for (i = 0; i <= count1 - count2; i++)
	{
		for (j = i; j < i + count2; j++)
		{
			flag = 1;
			if (s[j] != t[j - i])
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	if (flag == 1)
		printf("\nString is present\n\n");
	else
		printf("\nString is not present\n\n");
}