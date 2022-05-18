// *******************   NAME     : MITUL DUDHAT
//********************   ROLL NO. : 1261
//********************   DIV      : C
#include <stdio.h>
int areaofsquare()
{
    int a, b;
    printf("Enter your hight : ");
    scanf("%d", &a);
    b = a * a;
    return b;
}
int areaofrectangle()
{
    int l, h, b;
    printf("\n Enter your hight : ");
    scanf("%d", &h);
    printf("Enter your with : ");
    scanf("%d", &l);
    b = l * h;
    return b;
}
int main()
{
    printf(" Area of squre is %d", areaofsquare());
    printf("Area of rectangle is %d ", areaofrectangle());

    return 0;
}