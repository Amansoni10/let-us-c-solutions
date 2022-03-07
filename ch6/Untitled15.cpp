#include<stdio.h>

// recursion
int mySum(int n){
	if (n>0){
		return n%10 + mySum(n/10);
	}else{
		return 0;
	}
}

int main()

{
	int a,sum=0;
	
	a=423;
	// 423, 42, 4, 0
	// 3, 2, 4
	while(a>0){		
//		printf("%d -> %d\n", a, a%10);		
		sum += a%10;
		a /= 10;
	}
	printf("%d", sum);
	
	printf("\n%d", mySum(12));

}
