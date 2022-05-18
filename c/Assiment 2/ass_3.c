// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include <stdio.h>
void main()
{
    int n;
    int a[n];
    int *ptr = &a[n - 1];

    printf("Enter your num : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter your Element :");
        scanf("%d", &a[i]);
    }

    for (int i = (n - 1); i >= 0; i--)
    {
        printf("\n %d at address %u",a[i],ptr);
        ptr--;
    }
}