/* Write a function power ( a, b ), to calculate the value of a raised to 
b.*/

#include<stdio.h>

int power(a,b);

int main()

{
	int a,b,p;
	
	printf("Enter the value of a , b:");
	scanf("%d %d",&a,&b);
	
	p=power(a,b);
	
	printf("The power of a to the b is %d",p);
	
	return 0;
}

int power(int a,int b)
{

		int power=1,i;
		for(i=1; i<=b;i++)
		
		power=power*a;
		
		return (power);
}
