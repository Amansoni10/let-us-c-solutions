// gcc distance.c & ./distance.exe

#include<stdio.h>

int main()

{
	float km ,m ,cm ,in ;
	

	printf("\nwhat is the distance between to cities: ");
	
	scanf("%f", &km);
	
	
	m = km *1000 ;
	cm = m * 100 ;
	in = cm /2.54;
	
	printf(" distance in meters %f \n " , m);
	
	printf(" distance in centemeters %f \n ", cm);
	
	printf(" distance in inches %f \n ", in);
	
	return 0 ;
}
