#include<stdio.h>
void main()
{
	char s[100];
	int c = 0, i;

	printf("\nEnter the string=");
	gets(s);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' '&& s[i + 1] != ' ')
			c++;
	}
	printf("\nNo. of words in given string are=%d", c + 1);
	printf("\n\n");
}