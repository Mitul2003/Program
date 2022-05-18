//******roll no = 1261*********
//******NAME : MITUL DUDHAT*****
//******DIV : C********
#include <stdio.h>
void factorial(int num)
{
    int fac=1;
    for (int i = 1; i <= num; i++)
    {

        fac = fac * i;
    }
    printf("your fac. is %d", fac);
}
int main()
{
    int num;
    printf("Enter your num : ");
    scanf("%d", &num);

    factorial(num);
}