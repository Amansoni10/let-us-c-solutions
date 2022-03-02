/*Write a program to receive values of latitude (L1, L2) and longitude
(G1, G2), in degrees, of two places on the earth and output the 
distance (D) between them in nautical miles. The formula for 
distance in nautical miles is:
D = 3963 cos
-1
( sin L1 sin L2 + cos L1 cos L2 * cos ( G2 – G1 ) )*/

#include<stdio.h>
#include<math.h>

int main()

{
	float L1,L2,G1,G2,D;
	
	printf("Enter the value of (L1,L2)");
	scanf("%f%f",L1,L2);
	
	
	printf("Enter the value of (G1,G2)");
	scanf("%f%f",G1,G2);
	
	D = 3963*acos(sin(L1)*sin(L2)+ cos(L1)*cos(L2)*cos(G2–G1));
	
	printf("Distance between them is %f",D);
	
	return 0;
}
