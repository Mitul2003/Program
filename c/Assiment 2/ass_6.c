// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<stdio.h>
#define lli long long int
void main(){
    int n;
    puts("Enter your array size ");
    scanf("%d",&n);
    lli arre[n], *ptr = arre;
    for (int i = 0; i < n; i++)
    {
        puts("Enter yoyr aree : ");
        scanf("%lld",&arre[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%lld in stord at address is %u\n",*ptr,ptr);
        ptr++;
    }
}
