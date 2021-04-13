#include<stdio.h>
struct complex
{
	int real;
	int imag;

}c1;
struct complex c2;
void main()
{
	struct complex c3;
	c1.real = 10;
	c3.real = 20;
}
//c1 aur c2 global me jayega
//c3 main me jayega