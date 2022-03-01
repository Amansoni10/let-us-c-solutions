#include<stdio.h>

/*If the marks obtained by a student in five different subjects are 
input through the keyboard, write a program to find out the 
aggregate marks and percentage marks obtained by the student. 
Assume that the maximum marks that can be obtained by a student 
in each subject is 100*/

int main()

{
	int a,b,c,d,e , agr ;
	float per;
	printf("Enter Marks of subject 1 \n ");
	scanf("%d",&a);
	
	printf("Enter Marks of subject 2 \n ");
	scanf("%d",&b);
	
	printf("Enter Marks of subject 3 \n ");
	scanf("%d",&c);
	
	printf("Enter Marks of subject 4 \n ");
	scanf("%d",&d);
	
	printf("Enter Marks of subject 5 \n ");
	scanf("%d",&e);
	
	agr = (a+b+c+d+e);
	
	per = agr/5;
	
	printf("aggregate marks of stufent is %d \n", &agr);
	printf("percent of student is %d\n", &per);
	
	return 0;
}
