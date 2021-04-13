#include<stdio.h>
void mystrcat(char*, char*, char*);
void main()
{
	char arr[10] = "hello";
	char brr[10] = "world";
	char crr[20];
	mystrcat(arr, brr, crr);
}
void mystrcat(char*arr,char*brr,char*crr)
{
	int i=0,j=0;
	printf("\nEnter first string=%s",arr);
	
	printf("\nEnter second string=%s",brr);
	
	while (arr[i]!='\0')
	{
		crr[j] = arr[i];
		i++;
		j++;
	}
	i = 0;
	while (brr[i]!='\0')
	{
		crr[j] = brr[i];
		i++;
		j++;
	}
	crr[j] = '\0';
	printf("\nAfter concatenation=%s", crr);
	printf("\n\n");
	

}