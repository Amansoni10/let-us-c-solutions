/*Write a program to receive value of an angle in degrees and check 
whether sum of squares of sine and cosine of this angle is equal to 
1.*/

#include<stdio.h>
#include<math.h>
int main()

{
	float angle, pi=3.1459 ;
	
	printf("Enter the angle \n ");
	scanf("%f",&angle);
		
	angle=angle*pi/180 ;
	
	if(sin(angle)*sin(angle)+cos(angle)*cos(angle)==1? printf("1"):printf("it is not"));
	
	return 0;
}

