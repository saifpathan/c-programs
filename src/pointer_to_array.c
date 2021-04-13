#include<stdio.h>
void main()
{
	int arr[5] = { 10, 20, 30 };
	int*ptr;
	int i;
	ptr = &arr[0];						//or ptr=arr;
	for (i = 0; i < 5; i++)				//as array name(identifier)represents base address.
	{
		printf("\t%d", *(ptr+i));				//or *(arr+i)	//or arr[i]		//or ptr[i]
	}
	printf("\n\n");

	printf("\n%u", arr);				//poc as both arr and &arr[0] are same
	printf("\n%u", &arr[0]);
	printf("\n\n");
}