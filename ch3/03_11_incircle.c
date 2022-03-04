/*Given the coordinates (x, y) of center of a circle and its radius, write 
a program that will determine whether a point lies inside the circle,on
 the circle or outside the circle. (Hint: Use sqrt( ) and pow( )
functions)*/


#include<stdio.h>
#include<math.h>

int main()

{
	float x,y,x1,y1,r,d;
	
	printf("Enter the co ordintes of center (x,y) :");
	scanf("%f %f",&x,&y);
	
	printf("Enter the co ordinates of point (x1,y1):");
	scanf("%f %f",&x1,&y1);
	
	printf("Enter the radius r ");
	scanf("%f",&r);
	
	d = sqrt(pow((x1-x),2)+pow((y1-y),2));
	
	
	if(r==d)
		printf("point is on cirle\n");
		
	else
	{
	
		if(r>d)
			printf("point is inside\n");
		
		else
			printf("point is outside\n");
	}
	return 0;
		
		
}

