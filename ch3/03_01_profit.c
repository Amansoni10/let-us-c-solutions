/*If cost price and selling price of an item are input through the 
keyboard, write a program to determine whether the seller has 
made profit or incurred loss. Also determine how much profit he 
made or loss he incurred.*/



#include<stdio.h>
int main()
{
	float cp,sp;
	
	printf("Enter the cost price and selling price \n");
	scanf("%f%f1",&cp,&sp);
	
	if(sp>=cp)
		printf("comapany has made profit of %f ",(sp-cp));
		
		else
			printf("company has made loss of %f",(sp-cp));
			
			
	return 0;
}

