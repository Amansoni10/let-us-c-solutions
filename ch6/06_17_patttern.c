/*Write a program to produce the following output: 
      
	   1
     2   3
    4  5  6
  7  8  9 10  */
  
#include<stdio.h>

int main()

{
	int i,j,k=1,l,q=20;
	
	for(i=1;i<5;i++)
		{
			for(l=1;l<=q;l++)
			
				printf(" ");
					q-=2;
			for(j=1;j<=i;j++)
				{
					printf("  %d ",k);
					k++;
					
				}
				printf("\n");
			

		}	
	return 0;
	
}