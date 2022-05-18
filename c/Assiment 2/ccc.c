#include<stdio.h>

int incr(int i)
{
    int count =0;
    count = count + i;
    return (count);
}
int main(int argc, char const *argv[])
{
    int i,j;
    for (int i = 0; i <= 4; i++)
    {
        j = incr(i);
        printf("%d",j);
    }
    
    return 0;
}
