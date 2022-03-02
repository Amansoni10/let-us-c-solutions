 /*The length and breadth of a rectangle and radius of a circle are 
input through the keyboard. Write a program to calculate the area 
and perimeter of the rectangle, and the area and circumference of 
the circle.*/

#include<stdio.h>


int main()

{
	int l,b ,r , aor,cor;
	float  aoc, coc;
	
	printf("Enter the length and breath of rectangle : ");
	scanf("%d %d",&l, &b);
	
	printf("Enter the radius of circle ");
	scanf("%d", &r);
	
	aor= l*b;
	cor= (l+b)*2;
	
	aoc= 3.14 * r*r;
	coc= 2 * 3.14 *r;
	
	printf("Area and circum of rectangle are %d and %d ", aor , cor);
	
	printf("Area and circum of circle are %f and %f ",aoc,coc);
	
	return 0;
	
}
