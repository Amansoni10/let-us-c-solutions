/*Given three points (x1, y1), (x2, y2) and (x3, y3), write a program 
to check if all the three points fall on one straight line.*/

#include<stdio.h>


int main()

{
	float x1,x2,x3,y1,y2,y3,m,n;
	
	printf("Enter the value co ordinates ");
	scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
	
	m=((y2-y1)/(x2-x1));
	
	n=((y3-y2)/(x3-x2));
	
	if(m==n)
		printf("The co ordinates are on a line");
		
	else 
		printf("It is not on line");
		
	return 0;
	
	
	
	
}
