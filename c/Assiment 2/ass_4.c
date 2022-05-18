// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[2][2];
    
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter your aree of num a[%d][%d] : ", i, j);
            scanf("%d",&a[i][j]);
        }
    }
    int *ptr = &a[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("\n Your arre of num a[%d][%d] Valu is : %d ", i, j, (*ptr));
            ptr++;
        }
    }

    printf("\nRevers ordder");
    printf("\n");
    for (int i = 1; i >= 0; i--)
    {
        for (int j = 1; j >= 0; j--)
        {
            printf("\n Your arre of num a[%d][%d] Valu is : %d ", i, j, *(*(a + i)+j));
        }
    }

    return 0;
}
