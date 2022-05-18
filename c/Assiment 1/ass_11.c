// *******************   NAME     : MITUL DUDHAT
//********************   ROLL NO. : 1261
//********************   DIV      : C
#include <stdio.h>
#include <string.h>

void revers(char *str)
{
    int lenth = strlen(str);
    char *startp, *endp, temp;
    startp = str;
    endp = str;
    for (int i = 0; i < lenth - 1; i++)
    {
        endp++;
    }
    for (int i = 0; i < lenth / 2; i++)
    {
        temp = *endp;
        *endp = *startp;
        *startp = temp;
        startp++;
        endp--;
    }
}

int main()
{
    char str[50];
    printf("Enter your string :");
    scanf("%s", &str);
    revers(str);
    printf("Reverse string is : %s", str);
    return 0;
}