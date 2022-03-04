/*If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is isosceles, 
equilateral, scalene or right angled triangle.*/

#include<stdio.h>

int main()

{
	float a,b,c;
	
	printf("Enter the sides of triangle ");
	scanf("%f %f %f",&a,&b,&c);
			
	if(a==b&&b==c)
	{
		printf("it is a equilatral triangle");
	}
	else if(a==b&&b!=c||b==c&&c!=a||c==a&&a!=b)
	{
		printf("it is a issocelles triangle");
	}
	else if((c*c==a*a+b*b)||(a*a==b*b+c*c)||(b*b==c*c+a*a))
	{
		printf("it is a right angle triangle");
	}
	else
	
		printf("it is a scalene triangle");		
		
	return 0;		
	}
