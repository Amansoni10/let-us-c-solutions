#include<stdio.h>

int main()

{
	int a ,p,q,r,s,t,revnum;
	
	printf("Enter a five digit number\n");
	scanf("%d",&a);
	
	p=a%10;
	
	q=(a/10)%10;
	
	r=(a/100)%10;
	
	s=(a/1000)%10;
	
	t=(a/10000)%10;
	
	revnum = p*10000+q*1000+r*100+s*10+t;
	
	printf("revrse Number is %d",revnum);
	
	return 0;
	
}
