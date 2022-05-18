// *******************   NAME     : MITUL DUDHAT
//********************   ROLL NO. : 1261
//********************   DIV      : C
#include <stdio.h>
int max(int n, int arr[])
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (res < arr[i])
        {
            res = arr[i];
        }
    }
    return res;
}
int main()
{
    int n;
    printf("Enter the size of arry : ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter aree[%d] :",i);
        scanf("%d",&arr[i]);

    }

    printf("Max. ele. of arres is = %d",max(n,arr));
    

    return 0;
}
