/*Write a program to find the greatest of the three numbers entered 
through the keyboard. Use conditional operators.*/

#include<stdio.h>

int main()

{
	int a,b,c,great;
	
	printf("Enter the numbers");
	scanf("%d %d %d",&a,&b,&c);
	
	great=(a>b?((a>c)?a:c):(b>c)?b:c);
	
	printf("greatest = %d",great);
	return 0;
}

