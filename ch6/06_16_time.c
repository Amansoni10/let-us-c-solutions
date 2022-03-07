/*Write a program to print 24 hours of day with suitable suffixes like 
AM, PM, Noon and Midnight.
*/

#include<stdio.h>

int main()
{
	int  i,j;
	
	for(i=1;i<3;i++)
		{
			for(j=1;j<=12;j++)
				{
					if(i==1)
					printf("%d AM \n",j );
					 break;
				}
			
			
		} 
	return 0;	
}
