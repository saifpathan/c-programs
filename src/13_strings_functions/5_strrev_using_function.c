#include<stdio.h>
void main()
{
	char arr[20] = "firstbitsolutions";
	char brr[20];
	printf("\nThe given string is=%s\n\n", arr);
	int i, j, n = 0;

	while (arr[n] != '\0')
		n++;
	j = n - 1;
	for (i = 0; i < n; i++)
	{
		brr[i] = arr[j];
		j--;
	}
	brr[i] = '\0';
	printf("\nAfter reversing string is=%s\n\n", brr);
}