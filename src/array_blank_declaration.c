#include<stdio.h>
void main()
{
	int arr[];								//blank array declaration not possible
	arr[] = { 10, 20, 30, 40, 50 };			//gives compilation error=unknown size
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("\t%d", arr[i]);
	}
	printf("\n\n");
}