/* Consider a currency system in which there are notes of seven 
denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If 
a sum of Rs. N is entered through the keyboard, write a program to 
compute the smallest number of notes that will combine to give Rs. 
N*/

#include<stdio.h>

int main()

{
	int N,p,q,r,s,t,u,sum;
	
	printf("Enter the amount ");
	scanf("%d",&N);

	p=N/100;
	N=N%100;
	q=N/50;
	N=N%50;
	r=N/10;
	N=N%10;
	s=N/5;
	N=N%5;
	t=N/2;
	N=N/2;
	u=N%1;
	
	sum=p+q+r+s+t+u;
	
	printf("sum=%d",sum);
	
	return 0;
	
}
