// *******************   NAME     : MITUL DUDHAT
//********************   ROLL NO. : 1261
//********************   DIV      : C
#include <stdio.h>
int a[3][3];
void read(void)
{

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            printf("Enter your arre a[%d] [%d]  :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
}

void getdata(void)
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf("Aree is a[%d][%d]= %d \n", i, j, a[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char const *argv[])
{
    read();
    getdata();
    return 0;
}
