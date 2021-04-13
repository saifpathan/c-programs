#include<stdio.h>
float celfah(float);
void main()
{
	float cel, fah;
	printf("Enter temp in celsius=");
	scanf("%f", &cel);
	fah = celfah(cel);
	printf("\nTemp in fahrenheit is=%f", fah);
	printf("\n\n");
}
float celfah(float cel)
{
	float fah;
	fah = (9 * cel) / 5 + 32;
	return fah;
}