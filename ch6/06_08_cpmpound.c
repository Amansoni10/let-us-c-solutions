/*When interest compounds q times per year at an annual rate of 
r % for n years, the principal p compounds to an amount a as per 
the following formula
a = p ( 1 + r / q ) nq
Write a program to read 10 sets of p, r, n & q and calculate the 
corresponding as.
*/

#include<stdio.h>
#include<math.h>

int main()
{
	int n,q,i;
	float a,p,r;
	
	for(i=1;i<=10;i++)
		{
			printf("Enter the value of p,r,n,q : \n ");
			scanf("%f %f %d %d",&p, &r,&n,&q);
			
			a = p * pow((1+(r/q)),(n*q));
			
			printf("The value of a is %f\n",a);
			
		}
		return 0;
}
