/*Any integer is input through the keyboard. Write a program to find 
out whether it is an odd number or even number.
*/

#include<stdio.h>

int main()

{
	int a;
	printf("Enter the number :");
	scanf("%d",&a);
	
	if(a%2==0)
		printf("The number is even");
		
	else
		printf("The number is odd");
			
	return 0; 		
}
