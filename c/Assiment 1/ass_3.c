// *******************   NAME     : MITUL DUDHAT
//********************   ROLL NO. : 1261
//********************   DIV      : C
#include <stdio.h>
int year;
int Leapyear(void)
{

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)
    {
        return 1;
    }

    else if (year % 100 == 0)
    {
        return 0;
    }

    else if (year % 4 == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}
int main()
{

    if (Leapyear())
    {
        printf("%d is  a leap year(366).", year);
    }
    else
    {
        printf("%d is not a leap year.(365)", year);
    }
    return 0;
}