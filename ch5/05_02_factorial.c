/*Write a program to find the factorial value of any number entered 
through the keyboard.*/

#include<stdio.h>

int main()

{
	int i=1,num,fact=1;
	
	printf("Enter the number :");
	scanf("%d",&num);
	
	
	while(i<=num)	
{
  		fact=fact*num;
  		
  		num=num-1;
}

	printf("factorial of number is %d",fact);
	return 0;
	
}
