/*Write a program to find the absolute value of a number entered 
through the keyboard.*/


#include<stdio.h>

int main()

{
	int num;
	
	printf("Enter a number ");
	scanf("%d",&num);
	

	if(num<0)
	
		num=num*(-1);
		printf("The absolute value is %d",num);

	return 0;
}
