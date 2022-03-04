/*Any character is entered through the keyboard, write a program to 
determine whether the character entered is a capital letter, a small 
case letter, a digit or a special symbol.*/

#include<stdio.h>

int main()

{
	char A;
	
	printf("Enter a character :");
	scanf("%c",&A);
	
	if(A>=65&&A<=90)
		printf("character is a capital letter");
		
		else if(A>=97&&A<=122)
			printf("character is small letter");
			
			else if(A>=48&&A<=57)
				printf("character is a number");
				
				else if((A>=0&&A<=47)||(A>=58&&A<=64)||(A>=91&&A<=96)||(A>=123&&A<=127))
					printf("character is a symbol");
					
					return 0;	
}
