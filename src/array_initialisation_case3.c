#include<stdio.h>
void main()
{
	int arr[5] = { 10, 20, 30, 40, 50, 60, 70 };  //values more than array size
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n\n");
}													//compile error=too many initializers