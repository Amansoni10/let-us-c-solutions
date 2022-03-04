/*Any year is input 2through the keyboard. Write a program to 
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator)*/

#include<stdio.h>

int main()

{
	int year;
	printf("Enter the year :");
	scanf("%d",&year);
	
	if(year%4==0)
		{
			if(year%100==0)
				{
				  if(year%400==0)
					{
						printf("It is leap year");
					
					}
					else
						printf("It is not leap year");
				}
				else
				
					printf("It is leap year");
					
			
			
		}
	else
		printf("It is a not leap year");
		
	return 0;
}
