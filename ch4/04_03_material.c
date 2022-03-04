/* A certain grade of steel is graded according to the following
conditions:
(i) Hardness must be greater than 50
(ii) Carbon content must be less than 0.7
(iii) Tensile strength must be greater than 5600*/



#include<stdio.h>

int main()

{
	
	float H,ts,cc;
	
	printf("Enter the Hardness ,tensile strenth and carbon content ");
	scanf("%f %f %f",&H,&ts,&cc);
	
	if(H>50&&cc<0.7&&ts>5600)
		{
			printf("grade=10\n");
			exit(0);
		}
	if(H>50&&cc<0.7&&ts<=5600)
			
		printf("grade=9\n");
		exit(0);
	if(cc<0.7&&ts>5600&&H<=50)
			
		printf("grade=8\n");
		exit(0);
	if(H>50&&ts>5600&&cc>=0.7)

		printf("grade=7\n");
		exit(0);
		
	if(H>50||cc<0.7||ts>5600)
		
		printf("grade=6\n");
		exit(0);

		printf("grade=5\n");
			
	return 0;
	
}
