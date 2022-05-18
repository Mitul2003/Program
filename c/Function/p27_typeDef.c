#include<stdio.h>
void main(){
    typedef int aa;
    typedef float bb;
    aa A;
    aa B;
    bb *C;

    printf("Enter num of a : ");
    scanf("%d",&A);
    printf("Enter num of b : ");
    scanf("%d",&B);

    printf("\nNum of A is %d",A);
    printf("\nNum of B is %d",B);

    C=A+B;
    printf("\nAddition is %d",C);
    C=A-B;
    printf("\nsub. is %d",C);
    C=A*B;
    printf("\nMultifiton is %d",C);
}
