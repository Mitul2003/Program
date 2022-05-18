#include <stdio.h>
int fac_add(int a)
{
    if (a >= 0)
      return a + fac_add(a - 1);
    else
        return 0;
}

int main()
{
    int num;
    printf("Enter your num : ");
    scanf("%d", &num);
    printf("addition is %d ",fac_add(num));
    return 0;
}