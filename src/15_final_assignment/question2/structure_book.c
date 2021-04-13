#include<stdio.h>
typedef struct book
{
	char bname[50];
	int id;
	char author[50];
	float price;
}book;
void main()
{
	book b1;
	printf("\nEnter book name=");
	gets(b1.bname);
	printf("\nEnter author name=");
	gets(b1.author);
	printf("\nEnter price of book=");
	scanf("%f",&b1.price);
	printf("\nEnter id of book=");
	scanf("%d",&b1.id);
	printf("\n\n");

	printf("\nDetail of book given by user=");
	printf("\nBook name=%s", b1.bname);
	printf("\nAuthor name=%s", b1.author);
	printf("\nPrice of book=%f", b1.price);
	printf("\nI.D. of book=%d", b1.id);
	printf("\n\n");
}