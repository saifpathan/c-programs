#include<stdio.h>
#include<string.h>
void main()
{
	int i, j, l, s = 1;
	char str[100];

	printf("\nEnter the string=");
	gets(str);

	l = strlen(str);
	printf("length=%d", l);

	printf("\nDuplicate characters are=");
	for (i = 0; i < l; i++)
	{
		for (j = i + 1; j < l; j++)
		{
			if (str[i] == str[j])
			{
				if (s == 1 && str[j] != '\0')
				{
					printf("\n\t\t\t  %c", str[i]);
				}
				str[j] = '\0';
				s++;
			}
		}
		s = 1;
	}
	printf("\n\n");
}