 /*A machine is purchased which will produce earning of Rs. 1000 per 
year while it lasts. The machine costs Rs. 6000 and will have a 
salvage value of Rs. 2000 when it is condemned. If 9 percent per 
annum can be earned on alternate investments, write a program to 
determine what will be the minimum life of the machine to make it 
a more attractive investment compared to alternative investment?*/


#include<stdio.h>

int main()

{
	int n,R1,R2;
	
	for(n=1;n;n++)
		{
			R1=1000*n+2000;
			R2=(6000*n*9/100)+6000;
			
			if(R1>R2)
			{
				printf("minimum life is %d",n);
				break;
			}
		}
	return 0;	
}
