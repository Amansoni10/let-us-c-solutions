 /*A five-digit number is entered through the keyboard. Write a 
program to obtain the reversed number and to determine whether 
the original and reversed numbers are equal or not.*/

#include<stdio.h>

int main()

{
	int num,p,q,r,s,t,revnum,N;

	printf("Enter the number :");
	scanf("%d",&num);
	
	N=num;
	
	p=N%10;
	N=N/10;
	
	q=N%10;
	N=N/10;
	
	r=N%10;
	N=N/10;
	
	s=N%10;
	N=N/10;
	
	t=N;
	
	revnum= p*10000+q*1000+r*100+s*10+t;
	
	printf("The reverse of number is %d\n",revnum);
	
	if(num==revnum)
	{
		printf("Both numbers are same ");
		
		
	}
	else
		printf("numbers are different");
		
		
	return 0;	
	
}


