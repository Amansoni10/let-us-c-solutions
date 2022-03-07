/*Population of a town today is 100000. The population has increased 
steadily at the rate of 10 % per year for last 10 years. Write a 
program to determine the population at the end of each year in the 
last decade.
*/

#include<stdio.h>

int main()

{
	int i=1;
	float p;
	p=100000;
	
	do
	{
		printf("The population of %d year is %f \n ",i,p);
		p= p + p *(0.10);
		
		i++;
	}while(i<=10);
	return 0;
}
