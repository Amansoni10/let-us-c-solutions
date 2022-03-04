/*f the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is valid or not. The 
triangle is valid if the sum of two sides is greater than the largest of 
the three sides.*/

#include<stdio.h>

int main()

{
	float a,b,c;
	
	printf("Enter the sides of triangle :");
	scanf("%f %f %f",&a,&b,&c);
	
	if(a>b&&a>c)
	{
		if(b+c>a)
			printf("it is a valid triangle");
		else 
		printf("It is not a triagle");
	
	}	
	if(b>a&&b>c)
	{
		if(a+c>b)
			printf("it is a valid triangle");
		else 
		printf("It is not a triagle");
	
	}
			
	if(c>a&&c>b)
	
		if(a+b>c)
			printf("it is a valid triangle ");
	
		else 
		printf("It is not a triagle");
	
	return 0;		
			
}
