/*Write a program using conditional operators to determine whether 
a year entered through the keyboard is a leap year or not.*/

#include<stdio.h>

int main()

{
	int year;
	
	printf("Enter a year ");
	scanf("%d",&year);
	
	if((year%4==0&&year%100!=0)||(year%4==0&&year%100==0&&year%400==0)?printf("leap year"):printf("not a leap year")) ;
	
	return 0;
	
	
	
	
}
