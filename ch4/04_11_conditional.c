/*Whether the character entered through the keyboard is a 
lower case alphabet or not.*/

#include<stdio.h>

int main()

{
	char character;
	
	printf("Enter the character: ");
	scanf("%c",&character);
	
	if((character>=97&&character<=122)?printf("smallcase"):printf("it is not"));

		return 0;	
	
}
