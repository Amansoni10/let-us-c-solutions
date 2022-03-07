/*Write a program to print all prime numbers from 1 to 300. (Hint: 
Use nested loops, break and continue)*/

#include<stdio.h>

int main()

{
	int i,n;
	
	i=2;
	
	for(n=1;n<=300;n++)
		{
			for(i=2;i<n;i++)
		
			{					
				if(n%i==0)
				break;		
			}
			
			if(n==i)
					printf("%d\n",n);
										
		}
		return 0;
	
}
