#include<stdio.h>
void main()
{
	char arr[20] = "saIf";
	char brr[20] = "saiF";
	int i = 0;
	while (arr[i] == brr[i] && arr[i] != '\0')
		i++;
	if (arr[i] > brr[i])
		printf("\narr>brr");
	else if (arr[i] < brr[i])
		printf("\narr<brr");
	else
		printf("\narr=brr");
	printf("\n\n");
}