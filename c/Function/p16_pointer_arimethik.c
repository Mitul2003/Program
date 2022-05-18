#include<stdio.h>
void main(){
    int a=5,b=5;
    int *ptr1=&a,*ptr2=&b,*ptr3;

    printf("Your sum. is = %d",*ptr3=*ptr1 + *ptr2);
    printf("Your Mul. is = %d",*ptr3=*ptr1 * *ptr2);
    printf("Your div. is = %d",*ptr3=*ptr1 / *ptr2);
    
    
}