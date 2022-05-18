#include<stdio.h>
void swap(int a,int b){
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d\nb = %d",a,b);
}

int  main(){
    int a,b;
    printf("Enter your num. of a and b :\n  ");
    scanf("%d %d",&a,&b);
    
    swap(a,b);

    return 0;
}