/*If the ages of Ram, Shyam and Ajay are input through the keyboard, 
write a program to determine the youngest of the three.*/

#include<stdio.h>

int main()

{
	
	int r,s,a ;
	
	printf("Enter the age of Ram shyam and ajay : ");
	scanf("%d %d %d",&r,&s,&a);
	
	if(r<a)
	{
		if(r<s)
			printf("r is the yongest");
	}
	
	if(a<r)
	{
		if(a<s)
			printf("a is the yongest");
								
	}
	if(s<a)
	{
		if(s<r)
			printf("s is the youngest");
	}
	return 0;	
}


