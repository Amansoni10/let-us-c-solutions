/*Write a program to receive an integer and find its octal equivalent.*/

#include<stdio.h>
#include<math.h>
int main()

{
	int integer,n1,p,rem,oct=0;
	
	printf("Enter a interger ");
	scanf("%d",&integer);
	
	n1=integer;
	
	while(integer>0)	
	{
		rem=integer%8;
		integer=integer/8;
		
		oct= oct + rem * pow(10,p);
		p++;
		
	}
	printf("The octal value of %d is %d ",n1,oct);
	
	return 0;
}


/*
input: 100
	 dec | oct | hex | Aman (0-4)
	 1	1	1
	 2	2	2
	 .
	 .
	 .
	 7	7	7	
	 8	10	8
	 9	11	9

	 10
	 A
	 B
	 C
	 D
	 E
	 F -> 16


*/

