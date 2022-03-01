#include <stdio.h>

/*

Paper of size A0 has dimensions 1189 mm x 841 mm. Each
subsequent size A(n) is defined as A(n-1) cut in half parallel to its
shorter sides. Thus paper of size A1 would have dimensions 841
mm x 594 mm. Write a program to calculate and print paper sizes
A0, A1, A2, … A8.
 */


void main() {

    int l,b,t;

    l = 1189;
    b = 841;    

    //a0 -> lxb -> 1189x841
    //a1 -> 841x594
    //a2 -> 594x420
    //a3 -> 420x297

    printf("A0 -> %d x %d \n", l, b);        
    printf("A1 -> %d x %d \n", b, l/2);    
    printf("A2 -> %d x %d \n", l/2, b/2 );    
    printf("A3 -> %d x %d \n", b/2, l/2/2 );    

}
