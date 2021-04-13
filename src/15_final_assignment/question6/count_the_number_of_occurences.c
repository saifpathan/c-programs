#include<stdio.h>
void main()
{
	char s[100];
	int i, j, n, c = 0;
	printf("\nEnter the string=");
	gets(s);

	for (j = 0; s[j]; j++);
	n = j;

	printf("\nOccurence count of character in string=\n");
	for (i = 0; i < n; i++)
	{
		c = 1;
		if (s[i])
		{
			for (j = i + 1; j < n; j++)
			{
				if (s[i] == s[j])
				{
					c++;
					s[j] = '\0';
				}
			}
			printf("\n%c=%d", s[i], c);
		}
	}
	printf("\n\n");
}