/*If a five-digit number is input through the keyboard, write a 
program to reverse the number.*/

#include<stdio.h>

int main()

{
	int a ,p,q,r,s,t , sum;
	
	printf("Enter a five digit number\n");
	scanf("%d",&a);
	
	p=a%10;
	
	q=(a/10)%10;
	
	r=(a/100)%10;
	
	s=(a/1000)%10;
	
	t=(a/10000)%10;
	
	sum= p+q+r+s+t;
	
	printf("sum %d",sum);
	
	
	return 0;
	
	
	
	
}

