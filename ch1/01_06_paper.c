

/*(f) Paper of size A0 has dimensions 1189 mm x 841 mm. Each 
subsequent size A(n) is defined as A(n-1) cut in half parallel to its 
shorter sides. Thus paper of size A1 would have dimensions 841 
mm x 594 mm. Write a program to calculate and print paper sizes 
A0, A1, A2, … A8.*/


#include<stdio.h>

int main()

{
	int l,b;
	
	l=1189;
	b=841;
	
	printf("the length and breath of A0 is %d and %d \n", l, b);
	printf("The length and breath of A1 is %d and %d \n", b, l/2);
	printf("The length and breath of A2 is %d and %d \n", l/2, b/2);
	printf("The length and breath of A3 is %d and %d \n", b/2, l/4);
	
	
	return 0;
}
