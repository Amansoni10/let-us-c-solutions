/*If value of an angle is input through the keyboard,  write a program 
to print all its Trigonometric ratios.*/

#include<stdio.h>
#include<math.h>

int main()

{

	float  angle,s,c,t, pi ;
	pi= 3.14159;
	
	printf("Enter the vale of degree\n");
	scanf("%f",&angle);
	
	angle= angle*(pi/180);
	
	
	s= sin(angle);
	c= cos(angle);
	t= tan(angle);
	
	printf("The value of s=%f c=%f t=%f",s,c,t);
	
	
	return 0;
	
	

}

