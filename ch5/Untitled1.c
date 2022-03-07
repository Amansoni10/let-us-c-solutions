/*Write a function to calculate the factorial value of any integer 
entered through the keyboard.*/

#include<stdio.h>
int fact(int n);

int main()

{
	int n,factorial;
	
	printf("Enter a number :");
	scanf("%d",&n);
	
	factorial = fact(n);
	printf("The value of fact is %d ",factorial);
	
    return 0;	
}

int fact(int n)
	{
		int fact = 1,i;
		for(i=1;i<=n;i++)
		
			
				fact=fact*i;
			
			return(fact);
		
	}
