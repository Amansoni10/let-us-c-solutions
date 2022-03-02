
/*Temperature of a city in Fahrenheit degrees is input through the 
keyboard. Write a program to convert this temperature into 
Centigrade degrees.*/


#include<stdio.h>


int main()

{
	float feh , cent ;
	
	printf("Enter the value of Fahrenheit  ");
	
	scanf("%f",&feh);
	
	cent= (feh-32)*(5.0/9.0);
	
	printf("The value of centigrade is %f",cent);
	
	
	return 0;
}
