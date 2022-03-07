/*Two numbers are entered through the keyboard. Write a program 
to find the value of one number raised to the power of another.*/

#include<stdio.h>

int main()
{
	int a,b,i=1,p;
	
	printf("Enter two numbers a, b :");
	scanf("%d %d",&a,&b);
	
	p=a;
	while(i<b)
	{
		p=p*a;
		i++;
	}
	printf(" a to the b is %d",p);
	
	return 0;
}

