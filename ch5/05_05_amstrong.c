 /*Write a program to print out all Armstrong numbers between 1 and 
500. If sum of cubes of each digit of the number is equal to the 
number itself, then the number is called an Armstrong number. For 
example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 ).*/

#include<stdio.h>

int main()

{
	int i=1,a,b,p,q,r;
	
	while(i<=500)
	{
		p=i%10;
		a=i/10;
		
		q=a%10;
		b=a/10;
		
		r=b;
		
		if(i==(p*p*p+q*q*q+r*r*r))
		{
			printf("%d is a amstrong number\n",i);
		}
		i++;
	}
	return 0;
}

