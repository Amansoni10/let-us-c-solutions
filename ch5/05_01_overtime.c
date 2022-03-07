 /*Write a program to calculate overtime pay of 10 employees. 
Overtime is paid at the rate of Rs. 12.00 per hour for every hour 
worked above 40 hours. Assume that employees do not work for 
fractional part of an hour*/

#include<stdio.h>

int main()

{
	int i=1, H ,overpay;
	
	while(i<=10)
{
	printf("Enter the hour of empoyee %d:", i );
	scanf("%d",&H);
	
	H = H-40;
	
	overpay=H*12;
	
	printf("overpay amount =%d \n",overpay);
	i=i+1;
}
	return 0;
	
}
