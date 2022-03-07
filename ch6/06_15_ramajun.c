/*Ramanujan number is the smallest number that can be expressed 
as sum of two cubes in two different ways. Write a program to print 
all such numbers up to a reasonable limit.*/

#include<stdio.h>

int main()

{
	int a,b,c,d;
	
	for(a=1;a<31;a++)
		{
			for(b=1;b<31;b++)
				{
					for(c=1;c<31;c++)
						{
							for(d=1;d<31;d++)
								{
									if(a==c||a==d||b==c||b==d)
									continue;
									else if(a*a*a+b*b*b==c*c*c+d*d*d)
										printf("%d = ramajan number\n",);
									
								}
						}
				}
				
		}
		return 0;
}

