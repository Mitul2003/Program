// *******************   NAME     : MITUL DUDHAT
//********************   ROLL NO. : 1261
//********************   DIV      : C
#include <stdio.h>
int Lower(int x, int y, int z)
{
    if (x < y)
    {
        if (x < z)
        {
            return x;;
        }
        else
        {
            return z;
        }
    }
    else
    {
        if (y < z)
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}
int main()
{
    int x,y,z;
    printf("Enter the num of x : ");
    scanf("%d", &x);
    printf("Enter the num of y : ");
    scanf("%d", &y);
    printf("Enter the num of z : ");
    scanf("%d", &z);
    

    printf("Smaller number is %d",Lower(x,y,z));  

    return 0;
}
