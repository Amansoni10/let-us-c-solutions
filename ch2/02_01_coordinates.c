/*Write a program to receive Cartesian co-ordinates (x, y) of a point 
and convert them into polar co-ordinates (r, ).
Hint: r = sqrt ( x2
+ y2
) and tan-1
( y / x )*/

#include<stdio.h>
#include<math.h>

int main()

{
	int x,y;
	float r,theta ;
	
	printf("Enter the cartesian coordinates (x,y) :");
	scanf("%d%d",&x,&y);
	
	r=sqrt((x*x+y*y));
	
	theta= atan(y/x);
	
	
	printf("The polar co-ordinates are r=%f theta=%f",r,theta);
	
	return 0;
	
}
