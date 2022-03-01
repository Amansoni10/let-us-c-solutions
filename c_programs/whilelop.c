#include<stdio.h>

int main()

{
	int p , n ,count ;
	float si , r  ;
	count = 1;
	while( count<=3)
	{
		printf("Enter the value of P  N  R\n");
		scanf(" %d %d %f",&p,&n,&r);
		
		si = p*n*r /100 ;
		
		printf( "%f", si);
		
		count =count+1;
		
	}
	return 0 ;
	
}
