#include<stdio.h>

int main() 
{

	float gp , bp , da , hr ;	
	printf(" Enter the basic salary of ramesh ");
	
	scanf(" %f", &bp);
	
	da = 0.4*bp ;
	hr = 0.2*bp ;
	
	gp = da + hr + bp ;
	
	
	printf("gross salary of ramesh is %f  " , gp);
	
	return 0 ;
	
}


