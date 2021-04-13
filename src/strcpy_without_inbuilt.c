//inbuilt me dummy me brr return krta h
//to last wale me void return kia tha jo ni chalega
//qki interviwer ko aisa code chahiye jo inbuilt tarah kam kare

#include<stdio.h>
char* mystrcpy(char*, char*);
void main()
{
	char arr[5] = { 'a', 'b', 'c' };
	char brr[5];
	brr[5]=mystrcpy(brr, arr);
	printf("\nString copied brr=%s\n\n", brr);
}
char* mystrcpy(char*p1, char*p2)
{
	int i = 0;
	while (p2[i] != '\0')
	{
		p1[i] = p2[i];
		i++;
	}
	p1[i] = '\0';
	return p1;
}