#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	int i;
	printf("\nEnter the string=");
	gets(str);

	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] >= 65 && str[i] < 90)
			str[i] = str[i] + 32;
	}
	printf("\nString in lowercase=%s\n\n", str);

	for (i = 0; i <= strlen(str); i++)
	{
		if (str[i] >= 97 && str[i] < 122)
			str[i] = str[i] - 32;
	}
	printf("\nString in uppercase=%s\n\n\n", str);


}