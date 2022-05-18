// *******************   NAME     : MITUL DUDHAT
//********************   ROLL NO. : 1261
//********************   DIV      : C
#include <stdio.h>
void swap(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
    
}
void swap1(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter your num. of a and b :\n  ");
    scanf("%d %d", &a, &b);
    // call by value
    swap(a, b);
    printf("a = %d\nb = %d", a, b);
    // call by refernce
    swap1(&a, &b);
    printf("\na = %d\nb = %d", a, b);
    return 0;
}