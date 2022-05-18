#include<stdio.h>
#include <stdio.h>
void demo(int *);
int main()
{
int i=1090, *p1=&i;
demo (p1++);
return 0;
}
void demo(int *p)
{
printf("%d\n", *p);
}