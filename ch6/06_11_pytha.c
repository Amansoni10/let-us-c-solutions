/*Write a program to generate all Pythogorean Triplets with side 
length less than or equal to 30.*/


#include<stdio.h>

int main()

{
	int b,c,a;
	
	for(a=1;a<=30;a++)
		{
			for(b=1;b<=30;b++)
				{
					for(c=1;c<=30;c++)
						{
						if(c*c==a*a+b*b)
						printf("%d %d %d\n",a,b,c);
						
						}
				}
		}
	return 0;	
}
