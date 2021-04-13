#include<stdio.h>
void main()
{
	int arr[5];
	int i;
	int num;
	int flag = 0;
	for (i = 0; i < 5; i++)
	{
		printf("\nEnter values in array=");
		scanf("%d", &arr[i]);
	}
	printf("\nEnter no. to be searched in array=");
	scanf("%d", &num);

	for (i = 0; i < 5; i++)
	{
		if (arr[i] == num)
		{
			flag = 1;
		}
	}
	if (flag == 1)
	{
		printf("\nFound");
	}
	else
	{
		printf("\nNot found");
	}
	printf("\n\n");
}