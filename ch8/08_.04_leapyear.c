/* Any year is entered through the keyboard. Write a function to 
determine whether the year is a leap year or not.
*/

#include<stdio.h>
void leapYear(int);

int main()

{
	int year;
	
	printf("Enter the year :");
	scanf("%d",&year);
	
	leapYear(year);
	
	
	return 0;
}

void leapYear(int year )
	{
		
		if((year%4==0&&year%100!=0)||(year%4==0&&year%100==0&&year%400==0))
			{
				printf("It is a leap year");
				
			}
		
		else
			printf("not a leap year");	
				
				
	}
	
