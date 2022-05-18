#include<stdio.h>

void main(){
    int x=25;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    printf("\n Your first pointer valu = %d & Adderess is = %u",*ptr1,ptr1);
    printf("\n Your Second pointer valu = %d & Adderess is = %u",**ptr2,ptr2);
    printf("\n Your third pointer valu = %d & Adderess is = %u",***ptr3,ptr3);
}