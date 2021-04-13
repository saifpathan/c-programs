#include<stdio.h>
struct complex
{
	int real;
	int imag;
};
struct complex storevalue(struct complex);
void main()
{
	struct complex c1;
	c1 = storevalue(c1);
	printf("\nThe complex no. is=%d+%di", c1.real,c1.imag);
	printf("\n\n");
}
struct complex storevalue(struct complex t)
{
	t.real = 10;
	t.imag = 20;
	return t;
}