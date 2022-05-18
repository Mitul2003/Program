// Name     : DUDHAT MITUL NITESHBHAI
// ROLL NO  : 1261
// DIV      : C
#include<stdio.h>
void main(){
    int n;
    float a[n];
    int *ptr = &a[0];
    printf("Enter your num : ");
    scanf("%d",&n);
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter your Element :");
        scanf("%f",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("your Element of %f address is  %d\n",a[i],ptr);
        ptr++;
    }
    
}