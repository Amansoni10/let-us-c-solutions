/*Two numbers are input through the keyboard into two locations C 
and D. Write a program to interchange the contents of C and D.*/



#include<stdio.h>

int main()

{
	int C,D;
	
	printf("Enter the value of C and D ");
	scanf("%d %d",&C,&D);
	
	C=C+D;
	D=C-D;
	C=C-D;
	
	printf("The value of C and D is %d and %d",C,D);
	
	return 0;
	
	
		


}
