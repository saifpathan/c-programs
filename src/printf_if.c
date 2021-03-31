#include<stdio.h>
void main()
{
	if(printf("\nhi"))                       //if ke paranthesis() ke andar integer value chalti h
		printf("\nbye");                     //to yaha int me printf h jo int value return karega jo ki hi=2
	else                                     //non zero hone k wajah se wo next line execute karega n else line ko skip
		printf("\npune");   
}                                            //aur agar if k printf blank rakhoge to wo 0 character return karega 
                                              //aur if me 0 aane se wo else execute karega
