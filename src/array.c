#include<stdio.h>
void main()
{
	int b[5];
	int i;
	b[0] = 10;
	b[2] = 88;

	printf("\nValue of b[o]=%d", b[0]);
	printf("\nValue of b[2]=%d", b[2]);
	printf("\nValue of b[3]=%d", b[3]);

	for (i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
		printf("\n\n");
	}

}