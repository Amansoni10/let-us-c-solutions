/*Write a program to generate all combinations of 1, 2 and 3 using for
loop.
*/

#include<stdio.h>

int main()

{
	int a,b,c;
	
	for(a=1;a<4;a++)
		{
			for(b=1;b<4;b++)
				{
					for(c=1;c<4;c++)
						printf("(%d,%d,%d)" ,a,b,c);
				}
		}
	
	return 0;
		
		
}
