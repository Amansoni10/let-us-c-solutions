/*Given a point (x, y), write a program to find out if it lies on the Xaxis, Y-axis or on the origin.*/


#include<stdio.h>

int main()

{
	int x,y;
	
	printf("Enter the co ordinates of points (x,y):");
	scanf("%d %d",&x,&y);
	
	if(x==0)
		{
		if(y==0)
			printf("points are at origin");
			
		else
			printf("point is at y axis");
			
		}		
	if(x!=0)
		{
		if(y==0)
			printf("point is at x axis");
		
		}
	return 0;
					
}


