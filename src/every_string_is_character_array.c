#include<stdio.h>
void main()
{
	char brr[5] = { 'a', 'b' };
	int i=0;								//initialisation
	
	while (brr[i] != '\0')				//condition
	{
		printf("\n%c", brr[i]);			//printf
		i++;							//increment
	}
	printf("\n\n\n");
}
//every string is character array but every character array is not a string
//every string has null at the end or ever string ends with null