/*Whether a character entered through the keyboard is a special 
symbol or not.*/

/*0 - 47, 58 - 64, 91 - 96, 123 - 127*/


#include<stdio.h>

int main()
{
	char character;
	
	printf("Enter the character: ");
	scanf("%c",&character);
	
	if((character>=0&&character<=47)||(character>=58&&character<=64)||(character>=91&&character<=96)||(character>=123&&character<=127)?printf("special charcter"):printf("it is not"));
	
	return 0;

}

