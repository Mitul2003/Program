// *******************   NAME     : MITUL DUDHAT
//********************   ROLL NO. : 1261
//********************   DIV      : C
#include <stdio.h>
int fac(int a)
{
    if (a >= 1)
      return a*fac(a - 1);
    else
        return 1;
}

int main()
{
    int num;
    printf("Enter your num : ");
    scanf("%d", &num);
    printf("fac. of your num. is %d ",fac(num));
    return 0;
}